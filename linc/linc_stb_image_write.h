#pragma once

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

#include <tuple>

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

        extern int write_png_func(stbi_write_func *func, Dynamic context, int w, int h, int comp, ::haxe::io::Bytes bytes, int stride);

        extern int write_bmp_func(stbi_write_func *func, Dynamic context, int w, int h, int comp, ::haxe::io::Bytes bytes);

        extern int write_tga_func(stbi_write_func *func, Dynamic context, int w, int h, int comp, ::haxe::io::Bytes bytes);

        extern int write_hdr_func(stbi_write_func *func, Dynamic context, int w, int h, int comp, ::haxe::io::Bytes bytes);

        extern int write_jpg_func(stbi_write_func *func, Dynamic context, int w, int h, int comp, ::haxe::io::Bytes bytes, int quality);

    } //stb_image_write namespace

} //linc
