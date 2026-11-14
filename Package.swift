// swift-tools-version: 6.2

import PackageDescription

let package = Package(
    name: "lzfse-swift",
    products: [
        .library(
            name: "LZFSE",
            targets: ["LZFSE"]
        ),
    ],
    targets: [
        .target(
            name: "LZFSE",
            sources: [
                "lzfse/src/lzfse_decode.c",
                "lzfse/src/lzfse_decode_base.c",
                "lzfse/src/lzfse_encode.c",
                "lzfse/src/lzfse_encode_base.c",
                "lzfse/src/lzfse_fse.c",
                "lzfse/src/lzvn_decode_base.c",
                "lzfse/src/lzvn_encode_base.c",
                "lzvn_decode_buffer.c",
            ]
        ),
    ]
)
