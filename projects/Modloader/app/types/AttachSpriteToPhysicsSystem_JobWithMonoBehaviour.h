#pragma once
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_JobWithMonoBehaviour.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Boxed.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachSpriteToPhysicsSystem_JobWithMonoBehaviour {
        inline app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class** type_info() {
            static app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04799840));
            }
            return cache;
        }
        inline app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class* get_class() {
            return il2cpp::get_nested_class<app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Class>(type_info(), "", "AttachSpriteToPhysicsSystem", "JobWithMonoBehaviour");
        }
        inline app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour* create() {
            return il2cpp::create_object<app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour>(get_class());
        }
        inline app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Boxed* box(app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour value) {
            return il2cpp::box_value<app::AttachSpriteToPhysicsSystem_JobWithMonoBehaviour__Boxed>(get_class(), value);
        }
    } // namespace AttachSpriteToPhysicsSystem_JobWithMonoBehaviour
} // namespace app::classes::types
