#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentaclePhysicsController {
        inline app::TentaclePhysicsController__Class** type_info = (app::TentaclePhysicsController__Class**)(modloader::win::memory::resolve_rva(0x047118E8));
        inline app::TentaclePhysicsController__Class* get_class() {
            return il2cpp::get_class<app::TentaclePhysicsController__Class>(type_info, "", "TentaclePhysicsController");
        }
        inline app::TentaclePhysicsController* create() {
            return il2cpp::create_object<app::TentaclePhysicsController>(get_class());
        }
    } // namespace TentaclePhysicsController
} // namespace app::classes::types
