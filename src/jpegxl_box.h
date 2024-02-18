#pragma once

#include <cstdint>

enum jpegxl_box_type {
    box_image_raw,
    box_image_jxlc,
    box_image_jxlp,
    box_image_index,
    box_metadata_exif,
    box_metadata_xmp,
    box_metadata_jumbf,
    box_brotli,
    box_jpegreconstruction,
    box_unknown
};

class jpegxl_box {
private:
    enum jpegxl_box_type box_type;
    size_t box_size;
    uint8_t* box_contents;
public:
    jpegxl_box(enum jpegxl_box_type type, size_t size, uint8_t* contents) {
        box_type = type;
        box_size = size;
        box_contents = contents;
    }
    ~jpegxl_box() {
        free(box_contents);
    }
};
