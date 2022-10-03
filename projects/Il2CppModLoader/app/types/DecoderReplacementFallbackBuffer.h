#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecoderReplacementFallbackBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecoderReplacementFallbackBuffer__Class** type_info;
        inline app::DecoderReplacementFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::DecoderReplacementFallbackBuffer__Class>(type_info, "System.Text", "DecoderReplacementFallbackBuffer");
        }
        inline app::DecoderReplacementFallbackBuffer* create() {
            return il2cpp::create_object<app::DecoderReplacementFallbackBuffer>(get_class());
        }
    } // namespace DecoderReplacementFallbackBuffer
} // namespace app::classes::types
