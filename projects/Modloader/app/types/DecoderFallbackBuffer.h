#pragma once
#include <Modloader/app/structs/DecoderFallbackBuffer.h>
#include <Modloader/app/structs/DecoderFallbackBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecoderFallbackBuffer {
        inline app::DecoderFallbackBuffer__Class** type_info() {
            static app::DecoderFallbackBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DecoderFallbackBuffer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DecoderFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::DecoderFallbackBuffer__Class>(type_info(), "System.Text", "DecoderFallbackBuffer");
        }
        inline app::DecoderFallbackBuffer* create() {
            return il2cpp::create_object<app::DecoderFallbackBuffer>(get_class());
        }
    } // namespace DecoderFallbackBuffer
} // namespace app::classes::types
