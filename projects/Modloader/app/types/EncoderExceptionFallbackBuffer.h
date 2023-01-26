#pragma once
#include <Modloader/app/structs/EncoderExceptionFallbackBuffer.h>
#include <Modloader/app/structs/EncoderExceptionFallbackBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EncoderExceptionFallbackBuffer {
        inline app::EncoderExceptionFallbackBuffer__Class** type_info() {
            static app::EncoderExceptionFallbackBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EncoderExceptionFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x04725E90));
            }
            return cache;
        }
        inline app::EncoderExceptionFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::EncoderExceptionFallbackBuffer__Class>(type_info(), "System.Text", "EncoderExceptionFallbackBuffer");
        }
        inline app::EncoderExceptionFallbackBuffer* create() {
            return il2cpp::create_object<app::EncoderExceptionFallbackBuffer>(get_class());
        }
    } // namespace EncoderExceptionFallbackBuffer
} // namespace app::classes::types
