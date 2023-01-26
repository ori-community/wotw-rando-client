#pragma once
#include <Modloader/app/structs/EncoderFallbackBuffer.h>
#include <Modloader/app/structs/EncoderFallbackBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EncoderFallbackBuffer {
        inline app::EncoderFallbackBuffer__Class** type_info() {
            static app::EncoderFallbackBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EncoderFallbackBuffer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EncoderFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::EncoderFallbackBuffer__Class>(type_info(), "System.Text", "EncoderFallbackBuffer");
        }
        inline app::EncoderFallbackBuffer* create() {
            return il2cpp::create_object<app::EncoderFallbackBuffer>(get_class());
        }
    } // namespace EncoderFallbackBuffer
} // namespace app::classes::types
