#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentaclePhysicsPostprocess {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentaclePhysicsPostprocess__Class** type_info;
        inline app::TentaclePhysicsPostprocess__Class* get_class() {
            return il2cpp::get_class<app::TentaclePhysicsPostprocess__Class>(type_info, "Moon", "TentaclePhysicsPostprocess");
        }
        inline app::TentaclePhysicsPostprocess* create() {
            return il2cpp::create_object<app::TentaclePhysicsPostprocess>(get_class());
        }
    } // namespace TentaclePhysicsPostprocess
} // namespace app::classes::types
