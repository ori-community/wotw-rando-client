#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EncoderFallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EncoderFallback__Class** type_info;
        inline app::EncoderFallback__Class* get_class() {
            return il2cpp::get_class<app::EncoderFallback__Class>(type_info, "System.Text", "EncoderFallback");
        }
        inline app::EncoderFallback* create() {
            return il2cpp::create_object<app::EncoderFallback>(get_class());
        }
    } // namespace EncoderFallback
} // namespace app::classes::types
