#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EncoderExceptionFallbackBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EncoderExceptionFallbackBuffer__Class** type_info;
        inline app::EncoderExceptionFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::EncoderExceptionFallbackBuffer__Class>(type_info, "System.Text", "EncoderExceptionFallbackBuffer");
        }
        inline app::EncoderExceptionFallbackBuffer* create() {
            return il2cpp::create_object<app::EncoderExceptionFallbackBuffer>(get_class());
        }
    } // namespace EncoderExceptionFallbackBuffer
} // namespace app::classes::types
