#pragma once
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_JobSystem.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_JobSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachSpriteToPhysicsSystem_JobSystem {
        inline app::AttachSpriteToPhysicsSystem_JobSystem__Class** type_info() {
            static app::AttachSpriteToPhysicsSystem_JobSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttachSpriteToPhysicsSystem_JobSystem__Class**)(modloader::win::memory::resolve_rva(0x0470D728));
            }
            return cache;
        }
        inline app::AttachSpriteToPhysicsSystem_JobSystem__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachSpriteToPhysicsSystem_JobSystem__Class>(type_info(), "", "AttachSpriteToPhysicsSystem", "JobSystem");
        }
        inline app::AttachSpriteToPhysicsSystem_JobSystem* create() {
            return il2cpp::create_object<app::AttachSpriteToPhysicsSystem_JobSystem>(get_class());
        }
    } // namespace AttachSpriteToPhysicsSystem_JobSystem
} // namespace app::classes::types
