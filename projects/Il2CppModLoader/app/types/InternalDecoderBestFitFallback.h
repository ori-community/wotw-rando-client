#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalDecoderBestFitFallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalDecoderBestFitFallback__Class** type_info;
        inline app::InternalDecoderBestFitFallback__Class* get_class() {
            return il2cpp::get_class<app::InternalDecoderBestFitFallback__Class>(type_info, "System.Text", "InternalDecoderBestFitFallback");
        }
        inline app::InternalDecoderBestFitFallback* create() {
            return il2cpp::create_object<app::InternalDecoderBestFitFallback>(get_class());
        }
    } // namespace InternalDecoderBestFitFallback
} // namespace app::classes::types
