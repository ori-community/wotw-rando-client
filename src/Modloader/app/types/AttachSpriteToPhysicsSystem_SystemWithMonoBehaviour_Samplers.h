#pragma once
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers {
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class** type_info() {
            static app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class>(type_info(), "", "AttachSpriteToPhysicsSystem+SystemWithMonoBehaviour", "Samplers");
        }
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers* create() {
            return il2cpp::create_object<app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers>(get_class());
        }
    } // namespace AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers
} // namespace app::classes::types
