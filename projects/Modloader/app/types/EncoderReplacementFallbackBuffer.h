#pragma once
#include <Modloader/app/structs/EncoderReplacementFallbackBuffer.h>
#include <Modloader/app/structs/EncoderReplacementFallbackBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EncoderReplacementFallbackBuffer {
        inline app::EncoderReplacementFallbackBuffer__Class** type_info() {
            static app::EncoderReplacementFallbackBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EncoderReplacementFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x04715508));
            }
            return cache;
        }
        inline app::EncoderReplacementFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::EncoderReplacementFallbackBuffer__Class>(type_info(), "System.Text", "EncoderReplacementFallbackBuffer");
        }
        inline app::EncoderReplacementFallbackBuffer* create() {
            return il2cpp::create_object<app::EncoderReplacementFallbackBuffer>(get_class());
        }
    } // namespace EncoderReplacementFallbackBuffer
} // namespace app::classes::types
