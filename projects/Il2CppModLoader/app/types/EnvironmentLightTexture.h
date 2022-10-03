#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnvironmentLightTexture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnvironmentLightTexture__Class** type_info;
        inline app::EnvironmentLightTexture__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentLightTexture__Class>(type_info, "", "EnvironmentLightTexture");
        }
        inline app::EnvironmentLightTexture* create() {
            return il2cpp::create_object<app::EnvironmentLightTexture>(get_class());
        }
    } // namespace EnvironmentLightTexture
} // namespace app::classes::types
