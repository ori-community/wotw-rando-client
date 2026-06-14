#pragma once
#include <Modloader/app/structs/EncoderReplacementFallback.h>
#include <Modloader/app/structs/EncoderReplacementFallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EncoderReplacementFallback {
        inline app::EncoderReplacementFallback__Class** type_info() {
            static app::EncoderReplacementFallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EncoderReplacementFallback__Class**)(modloader::win::memory::resolve_rva(0x04774708));
            }
            return cache;
        }
        inline app::EncoderReplacementFallback__Class* get_class() {
            return il2cpp::get_class<app::EncoderReplacementFallback__Class>(type_info(), "System.Text", "EncoderReplacementFallback");
        }
        inline app::EncoderReplacementFallback* create() {
            return il2cpp::create_object<app::EncoderReplacementFallback>(get_class());
        }
    } // namespace EncoderReplacementFallback
} // namespace app::classes::types
