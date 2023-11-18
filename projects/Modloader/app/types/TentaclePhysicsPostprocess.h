#pragma once
#include <Modloader/app/structs/TentaclePhysicsPostprocess.h>
#include <Modloader/app/structs/TentaclePhysicsPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentaclePhysicsPostprocess {
        inline app::TentaclePhysicsPostprocess__Class** type_info() {
            static app::TentaclePhysicsPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TentaclePhysicsPostprocess__Class**)(modloader::win::memory::resolve_rva(0x04709D00));
            }
            return cache;
        }
        inline app::TentaclePhysicsPostprocess__Class* get_class() {
            return il2cpp::get_class<app::TentaclePhysicsPostprocess__Class>(type_info(), "Moon", "TentaclePhysicsPostprocess");
        }
        inline app::TentaclePhysicsPostprocess* create() {
            return il2cpp::create_object<app::TentaclePhysicsPostprocess>(get_class());
        }
    } // namespace TentaclePhysicsPostprocess
} // namespace app::classes::types
