#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalDecoderBestFitFallbackBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalDecoderBestFitFallbackBuffer__Class** type_info;
        inline app::InternalDecoderBestFitFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::InternalDecoderBestFitFallbackBuffer__Class>(type_info, "System.Text", "InternalDecoderBestFitFallbackBuffer");
        }
        inline app::InternalDecoderBestFitFallbackBuffer* create() {
            return il2cpp::create_object<app::InternalDecoderBestFitFallbackBuffer>(get_class());
        }
    } // namespace InternalDecoderBestFitFallbackBuffer
} // namespace app::classes::types
