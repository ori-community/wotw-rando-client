#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EncoderReplacementFallback {
        inline app::EncoderReplacementFallback__Class** type_info = (app::EncoderReplacementFallback__Class**)(modloader::win::memory::resolve_rva(0x04774708));
        inline app::EncoderReplacementFallback__Class* get_class() {
            return il2cpp::get_class<app::EncoderReplacementFallback__Class>(type_info, "System.Text", "EncoderReplacementFallback");
        }
        inline app::EncoderReplacementFallback* create() {
            return il2cpp::create_object<app::EncoderReplacementFallback>(get_class());
        }
    } // namespace EncoderReplacementFallback
} // namespace app::classes::types
