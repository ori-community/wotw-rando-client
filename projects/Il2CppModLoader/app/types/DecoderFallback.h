#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecoderFallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecoderFallback__Class** type_info;
        inline app::DecoderFallback__Class* get_class() {
            return il2cpp::get_class<app::DecoderFallback__Class>(type_info, "System.Text", "DecoderFallback");
        }
        inline app::DecoderFallback* create() {
            return il2cpp::create_object<app::DecoderFallback>(get_class());
        }
    } // namespace DecoderFallback
} // namespace app::classes::types
