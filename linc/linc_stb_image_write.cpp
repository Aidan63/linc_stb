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

    } //stb_image_write namespace

} //linc