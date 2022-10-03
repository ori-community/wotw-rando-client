#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecoderReplacementFallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecoderReplacementFallback__Class** type_info;
        inline app::DecoderReplacementFallback__Class* get_class() {
            return il2cpp::get_class<app::DecoderReplacementFallback__Class>(type_info, "System.Text", "DecoderReplacementFallback");
        }
        inline app::DecoderReplacementFallback* create() {
            return il2cpp::create_object<app::DecoderReplacementFallback>(get_class());
        }
    } // namespace DecoderReplacementFallback
} // namespace app::classes::types
