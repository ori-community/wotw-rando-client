#pragma once
#include <Modloader/app/structs/DecoderReplacementFallbackBuffer.h>
#include <Modloader/app/structs/DecoderReplacementFallbackBuffer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecoderReplacementFallbackBuffer {
        inline app::DecoderReplacementFallbackBuffer__Class** type_info() {
            static app::DecoderReplacementFallbackBuffer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DecoderReplacementFallbackBuffer__Class**)(modloader::win::memory::resolve_rva(0x04715DC0));
            }
            return cache;
        }
        inline app::DecoderReplacementFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::DecoderReplacementFallbackBuffer__Class>(type_info(), "System.Text", "DecoderReplacementFallbackBuffer");
        }
        inline app::DecoderReplacementFallbackBuffer* create() {
            return il2cpp::create_object<app::DecoderReplacementFallbackBuffer>(get_class());
        }
    } // namespace DecoderReplacementFallbackBuffer
} // namespace app::classes::types
