#pragma once

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include "../lib/stb_image_write.h"

namespace linc {

    namespace stb_image_write {

        extern int write_bmp(char const *filename, int w, int h, int comp, Array<unsigned char> bytes,
            unsigned int byteOffset, unsigned int byteLength);

        extern int write_tga(char const *filename, int w, int h, int comp, Array<unsigned char> bytes,
            unsigned int byteOffset, unsigned int byteLength);

        extern int write_hdr(char const *filename, int w, int h, int comp, Array<unsigned char> bytes,
            unsigned int byteOffset, unsigned int byteLength);

        extern int write_png(char const *filename, int w, int h, int comp, Array<unsigned char> bytes,
            unsigned int byteOffset, unsigned int byteLength, int stride_in_bytes);

        extern int write_jpg(char const *filename, int w, int h, int comp, Array<unsigned char> bytes,
            unsigned int byteOffset, unsigned int byteLength, int quality);

    } //stb_image_write namespace

} //linc
