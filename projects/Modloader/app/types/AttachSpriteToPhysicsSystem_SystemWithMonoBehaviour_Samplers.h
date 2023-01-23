#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers.h>

namespace app::classes::types {
    namespace AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers {
        namespace {
            inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class* type_info_ref = nullptr;
        }
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class** type_info = &type_info_ref;
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers__Class>(type_info, "", "AttachSpriteToPhysicsSystem+SystemWithMonoBehaviour", "Samplers");
        }
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers* create() {
            return il2cpp::create_object<app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers>(get_class());
        }
    } // namespace AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_Samplers
} // namespace app::classes::types
