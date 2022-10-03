#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightInfluenceSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightInfluenceSettings__Class** type_info;
        inline app::LightInfluenceSettings__Class* get_class() {
            return il2cpp::get_class<app::LightInfluenceSettings__Class>(type_info, "", "LightInfluenceSettings");
        }
        inline app::LightInfluenceSettings* create() {
            return il2cpp::create_object<app::LightInfluenceSettings>(get_class());
        }
    } // namespace LightInfluenceSettings
} // namespace app::classes::types
