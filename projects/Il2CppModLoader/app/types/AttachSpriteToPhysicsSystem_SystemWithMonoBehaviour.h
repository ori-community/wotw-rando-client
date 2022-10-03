#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class** type_info;
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class>(type_info, "", "AttachSpriteToPhysicsSystem", "SystemWithMonoBehaviour");
        }
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour* create() {
            return il2cpp::create_object<app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour>(get_class());
        }
    } // namespace AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour
} // namespace app::classes::types
