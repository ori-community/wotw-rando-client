#pragma once
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour {
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class** type_info() {
            static app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04709DD0));
            }
            return cache;
        }
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour__Class>(type_info(), "", "AttachSpriteToPhysicsSystem", "SystemWithMonoBehaviour");
        }
        inline app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour* create() {
            return il2cpp::create_object<app::AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour>(get_class());
        }
    } // namespace AttachSpriteToPhysicsSystem_SystemWithMonoBehaviour
} // namespace app::classes::types
