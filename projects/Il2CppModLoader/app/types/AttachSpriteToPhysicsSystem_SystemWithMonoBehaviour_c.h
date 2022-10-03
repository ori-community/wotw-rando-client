#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__Class** type_info;
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c__Class>(type_info, "", "AttachSpriteToPhysicsSystem+SystemWithMonoBehaviour", "<>c");
        }
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c* create() {
            return il2cpp::create_object<app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c>(get_class());
        }
    } // namespace AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour_c
} // namespace app::classes::types
