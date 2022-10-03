#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharEntityEncoderFallbackBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharEntityEncoderFallbackBuffer__Class** type_info;
        inline app::CharEntityEncoderFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::CharEntityEncoderFallbackBuffer__Class>(type_info, "System.Xml", "CharEntityEncoderFallbackBuffer");
        }
        inline app::CharEntityEncoderFallbackBuffer* create() {
            return il2cpp::create_object<app::CharEntityEncoderFallbackBuffer>(get_class());
        }
    } // namespace CharEntityEncoderFallbackBuffer
} // namespace app::classes::types
