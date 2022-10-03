#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EncoderFallbackException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EncoderFallbackException__Class** type_info;
        inline app::EncoderFallbackException__Class* get_class() {
            return il2cpp::get_class<app::EncoderFallbackException__Class>(type_info, "System.Text", "EncoderFallbackException");
        }
        inline app::EncoderFallbackException* create() {
            return il2cpp::create_object<app::EncoderFallbackException>(get_class());
        }
    } // namespace EncoderFallbackException
} // namespace app::classes::types
