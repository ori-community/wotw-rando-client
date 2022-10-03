#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecoderFallbackBuffer {
        namespace {
            app::DecoderFallbackBuffer__Class* type_info_ref = nullptr;
        }
        app::DecoderFallbackBuffer__Class** type_info = &type_info_ref;
        inline app::DecoderFallbackBuffer__Class* get_class() {
            return il2cpp::get_class<app::DecoderFallbackBuffer__Class>(type_info, "System.Text", "DecoderFallbackBuffer");
        }
        inline app::DecoderFallbackBuffer* create() {
            return il2cpp::create_object<app::DecoderFallbackBuffer>(get_class());
        }
    } // namespace DecoderFallbackBuffer
} // namespace app::classes::types
