#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalEncoderBestFitFallbackBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalEncoderBestFitFallbackBuffer__Class** type_info;
        inline app::InternalEncoderBestFitFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::InternalEncoderBestFitFallbackBuffer__Class>(type_info, "System.Text", "InternalEncoderBestFitFallbackBuffer");
        }
        inline app::InternalEncoderBestFitFallbackBuffer* create() {
            return il2cpp::create_object<app::InternalEncoderBestFitFallbackBuffer>(get_class());
        }
    } // namespace InternalEncoderBestFitFallbackBuffer
} // namespace app::classes::types
