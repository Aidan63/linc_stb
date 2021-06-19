//hxcpp include should be first
#include <hxcpp.h>

#include "./linc_stb_image_write.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "../lib/stb_image_write.h"

namespace linc {

    namespace stb_image_write {

        int write_bmp(char const *filename, int w, int h, int comp, Array<unsigned char> bytes,
        	unsigned int byteOffset, unsigned int byteLength)
	    {
	        return stbi_write_bmp(filename, w, h, comp, &bytes[0] + byteOffset);
	    }

	    int write_tga(char const *filename, int w, int h, int comp, Array<unsigned char> bytes,
        	unsigned int byteOffset, unsigned int byteLength)
	    {
	        return stbi_write_tga(filename, w, h, comp, &bytes[0] + byteOffset);
	    }

	    int write_hdr(char const *filename, int w, int h, int comp, Array<unsigned char> bytes,
        	unsigned int byteOffset, unsigned int byteLength)
	    {
	        return stbi_write_hdr(filename, w, h, comp, (float*)(&bytes[0] + byteOffset));
	    }

	    int write_png(char const *filename, int w, int h, int comp, Array<unsigned char> bytes,
        	unsigned int byteOffset, unsigned int byteLength, int stride_in_bytes)
	    {
	        return stbi_write_png(filename, w, h, comp, &bytes[0] + byteOffset, stride_in_bytes);
	    }

		int write_jpg(char const *filename, int w, int h, int comp, Array<unsigned char> bytes,
			unsigned int byteOffset, unsigned int byteLength, int quality)
		{
			return stbi_write_jpg(filename, w, h, comp, &bytes[0] + byteOffset, quality);
		}

		int write_png_func(stbi_write_func *func, Dynamic context, int w, int h, int comp, ::haxe::io::Bytes bytes, int stride)
		{
			return stbi_write_png_to_func(
				func,
				(void*)(::cpp::Pointer_obj::addressOf(context)->ptr),
				w,
				h,
				comp,
				&bytes->b[0],
				stride);
		}

        int write_bmp_func(stbi_write_func *func, Dynamic context, int w, int h, int comp, ::haxe::io::Bytes bytes)
		{
			return stbi_write_bmp_to_func(
				func,
				(void*)(::cpp::Pointer_obj::addressOf(context)->ptr),
				w,
				h,
				comp,
				&bytes->b[0]);
		}

        int write_tga_func(stbi_write_func *func, Dynamic context, int w, int h, int comp, ::haxe::io::Bytes bytes)
		{
			return stbi_write_tga_to_func(
				func,
				(void*)(::cpp::Pointer_obj::addressOf(context)->ptr),
				w,
				h,
				comp,
				&bytes->b[0]);
		}

        int write_hdr_func(stbi_write_func *func, Dynamic context, int w, int h, int comp, ::haxe::io::Bytes bytes)
		{
			return stbi_write_hdr_to_func(
				func,
				(void*)(::cpp::Pointer_obj::addressOf(context)->ptr),
				w,
				h,
				comp,
				(float*)(&bytes->b[0]));
		}

        int write_jpg_func(stbi_write_func *func, Dynamic context, int w, int h, int comp, ::haxe::io::Bytes bytes, int quality)
		{
			return stbi_write_jpg_to_func(
				func,
				(void*)(::cpp::Pointer_obj::addressOf(context)->ptr),
				w,
				h,
				comp,
				&bytes->b[0],
				quality);
		}

    } //stb_image_write namespace

} //linc