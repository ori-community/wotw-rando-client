#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentaclePhysicsController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentaclePhysicsController__Class** type_info;
        inline app::TentaclePhysicsController__Class* get_class() {
            return il2cpp::get_class<app::TentaclePhysicsController__Class>(type_info, "", "TentaclePhysicsController");
        }
        inline app::TentaclePhysicsController* create() {
            return il2cpp::create_object<app::TentaclePhysicsController>(get_class());
        }
    } // namespace TentaclePhysicsController
} // namespace app::classes::types
