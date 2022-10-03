#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachSpriteToPhysicsSystem_JobSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttachSpriteToPhysicsSystem_JobSystem__Class** type_info;
        inline app::AttachSpriteToPhysicsSystem_JobSystem__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachSpriteToPhysicsSystem_JobSystem__Class>(type_info, "", "AttachSpriteToPhysicsSystem", "JobSystem");
        }
        inline app::AttachSpriteToPhysicsSystem_JobSystem* create() {
            return il2cpp::create_object<app::AttachSpriteToPhysicsSystem_JobSystem>(get_class());
        }
    } // namespace AttachSpriteToPhysicsSystem_JobSystem
} // namespace app::classes::types
