#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialTypeVFXSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaterialTypeVFXSettings__Class** type_info;
        inline app::MaterialTypeVFXSettings__Class* get_class() {
            return il2cpp::get_class<app::MaterialTypeVFXSettings__Class>(type_info, "", "MaterialTypeVFXSettings");
        }
        inline app::MaterialTypeVFXSettings* create() {
            return il2cpp::create_object<app::MaterialTypeVFXSettings>(get_class());
        }
    } // namespace MaterialTypeVFXSettings
} // namespace app::classes::types
