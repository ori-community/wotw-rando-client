#pragma once
#include <Modloader/app/structs/TentaclePhysicsController.h>
#include <Modloader/app/structs/TentaclePhysicsController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentaclePhysicsController {
        inline app::TentaclePhysicsController__Class** type_info() {
            static app::TentaclePhysicsController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentaclePhysicsController__Class**)(modloader::win::memory::resolve_rva(0x047118E8));
            }
            return cache;
        }
        inline app::TentaclePhysicsController__Class* get_class() {
            return il2cpp::get_class<app::TentaclePhysicsController__Class>(type_info(), "", "TentaclePhysicsController");
        }
        inline app::TentaclePhysicsController* create() {
            return il2cpp::create_object<app::TentaclePhysicsController>(get_class());
        }
    } // namespace TentaclePhysicsController
} // namespace app::classes::types
