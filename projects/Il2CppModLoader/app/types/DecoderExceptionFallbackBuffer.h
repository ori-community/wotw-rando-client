#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecoderExceptionFallbackBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecoderExceptionFallbackBuffer__Class** type_info;
        inline app::DecoderExceptionFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::DecoderExceptionFallbackBuffer__Class>(type_info, "System.Text", "DecoderExceptionFallbackBuffer");
        }
        inline app::DecoderExceptionFallbackBuffer* create() {
            return il2cpp::create_object<app::DecoderExceptionFallbackBuffer>(get_class());
        }
    } // namespace DecoderExceptionFallbackBuffer
} // namespace app::classes::types
