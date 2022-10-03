#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsMaterialManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PhysicsMaterialManager__Class** type_info;
        inline app::PhysicsMaterialManager__Class* get_class() {
            return il2cpp::get_class<app::PhysicsMaterialManager__Class>(type_info, "", "PhysicsMaterialManager");
        }
        inline app::PhysicsMaterialManager* create() {
            return il2cpp::create_object<app::PhysicsMaterialManager>(get_class());
        }
    } // namespace PhysicsMaterialManager
} // namespace app::classes::types
