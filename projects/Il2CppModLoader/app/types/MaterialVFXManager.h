#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialVFXManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaterialVFXManager__Class** type_info;
        inline app::MaterialVFXManager__Class* get_class() {
            return il2cpp::get_class<app::MaterialVFXManager__Class>(type_info, "", "MaterialVFXManager");
        }
        inline app::MaterialVFXManager* create() {
            return il2cpp::create_object<app::MaterialVFXManager>(get_class());
        }
    } // namespace MaterialVFXManager
} // namespace app::classes::types
