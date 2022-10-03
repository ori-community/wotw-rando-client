#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderMainTexture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderMainTexture__Class** type_info;
        inline app::UberShaderMainTexture__Class* get_class() {
            return il2cpp::get_class<app::UberShaderMainTexture__Class>(type_info, "", "UberShaderMainTexture");
        }
        inline app::UberShaderMainTexture* create() {
            return il2cpp::create_object<app::UberShaderMainTexture>(get_class());
        }
    } // namespace UberShaderMainTexture
} // namespace app::classes::types
