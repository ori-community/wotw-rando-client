#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EncoderReplacementFallbackBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EncoderReplacementFallbackBuffer__Class** type_info;
        inline app::EncoderReplacementFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::EncoderReplacementFallbackBuffer__Class>(type_info, "System.Text", "EncoderReplacementFallbackBuffer");
        }
        inline app::EncoderReplacementFallbackBuffer* create() {
            return il2cpp::create_object<app::EncoderReplacementFallbackBuffer>(get_class());
        }
    } // namespace EncoderReplacementFallbackBuffer
} // namespace app::classes::types
