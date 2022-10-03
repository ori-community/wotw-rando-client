#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShootableCreepVisuals {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShootableCreepVisuals__Class** type_info;
        inline app::ShootableCreepVisuals__Class* get_class() {
            return il2cpp::get_class<app::ShootableCreepVisuals__Class>(type_info, "", "ShootableCreepVisuals");
        }
        inline app::ShootableCreepVisuals* create() {
            return il2cpp::create_object<app::ShootableCreepVisuals>(get_class());
        }
    } // namespace ShootableCreepVisuals
} // namespace app::classes::types
