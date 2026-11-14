#ifndef LZVN_H
#define LZVN_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/*! @abstract Decompress a raw LZVN stream, as found outside an LZFSE container
 *  (for example in APFS/HFS+ compressed files and kernel caches).
 *
 *  @param dst_buffer Pointer to the first byte of the destination buffer.
 *  @param dst_size Size of the destination buffer in bytes.
 *  @param src_buffer Pointer to the first byte of the source buffer.
 *  @param src_size Size of the source buffer in bytes.
 *
 *  @return The number of bytes written to the destination buffer if the stream
 *  was decoded up to its end-of-stream marker. Returns zero if the stream is
 *  truncated or malformed, or if the destination buffer is too small.
 *
 *  lzfse declares this function in lzfse_internal.h without defining it. */
size_t lzvn_decode_buffer(void *__restrict dst_buffer, size_t dst_size,
                          const void *__restrict src_buffer, size_t src_size);

#ifdef __cplusplus
}
#endif

#endif /* LZVN_H */
