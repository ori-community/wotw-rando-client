#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecoderExceptionFallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecoderExceptionFallback__Class** type_info;
        inline app::DecoderExceptionFallback__Class* get_class() {
            return il2cpp::get_class<app::DecoderExceptionFallback__Class>(type_info, "System.Text", "DecoderExceptionFallback");
        }
        inline app::DecoderExceptionFallback* create() {
            return il2cpp::create_object<app::DecoderExceptionFallback>(get_class());
        }
    } // namespace DecoderExceptionFallback
} // namespace app::classes::types
