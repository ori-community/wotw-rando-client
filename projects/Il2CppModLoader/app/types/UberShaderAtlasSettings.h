#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAtlasSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderAtlasSettings__Class** type_info;
        inline app::UberShaderAtlasSettings__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAtlasSettings__Class>(type_info, "", "UberShaderAtlasSettings");
        }
        inline app::UberShaderAtlasSettings* create() {
            return il2cpp::create_object<app::UberShaderAtlasSettings>(get_class());
        }
    } // namespace UberShaderAtlasSettings
} // namespace app::classes::types
