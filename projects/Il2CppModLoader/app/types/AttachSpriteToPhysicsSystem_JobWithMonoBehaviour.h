#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachSpriteToPhysicsSystem_JobWithMonoBehaviour {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class** type_info;
        inline app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class>(type_info, "", "AttachSpriteToPhysicsSystem", "JobWithMonoBehaviour");
        }
        inline app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour* create() {
            return il2cpp::create_object<app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour>(get_class());
        }
        inline app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Boxed* box(app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour value) {
            return il2cpp::box_value<app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Boxed>(get_class(), value);
        }
    } // namespace AttachSpriteToPhysicsSystem_JobWithMonoBehaviour
} // namespace app::classes::types
