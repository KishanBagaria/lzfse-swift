#include "include/lzvn.h"
#include "lzfse/src/lzvn_decode_base.h"

size_t lzvn_decode_buffer(void *__restrict dst_buffer, size_t dst_size,
                          const void *__restrict src_buffer, size_t src_size) {
    lzvn_decoder_state state = {0};
    state.src = src_buffer;
    state.src_end = state.src + src_size;
    state.dst = dst_buffer;
    state.dst_begin = dst_buffer;
    state.dst_end = state.dst + dst_size;
    lzvn_decode(&state);
    return state.end_of_stream ? (size_t)(state.dst - state.dst_begin) : 0;
}
