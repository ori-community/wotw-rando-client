#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecoderFallbackException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecoderFallbackException__Class** type_info;
        inline app::DecoderFallbackException__Class* get_class() {
            return il2cpp::get_class<app::DecoderFallbackException__Class>(type_info, "System.Text", "DecoderFallbackException");
        }
        inline app::DecoderFallbackException* create() {
            return il2cpp::create_object<app::DecoderFallbackException>(get_class());
        }
    } // namespace DecoderFallbackException
} // namespace app::classes::types
