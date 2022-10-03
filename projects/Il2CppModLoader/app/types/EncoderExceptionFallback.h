#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EncoderExceptionFallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EncoderExceptionFallback__Class** type_info;
        inline app::EncoderExceptionFallback__Class* get_class() {
            return il2cpp::get_class<app::EncoderExceptionFallback__Class>(type_info, "System.Text", "EncoderExceptionFallback");
        }
        inline app::EncoderExceptionFallback* create() {
            return il2cpp::create_object<app::EncoderExceptionFallback>(get_class());
        }
    } // namespace EncoderExceptionFallback
} // namespace app::classes::types
