#pragma once
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem__Array.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachSpriteToPhysicsSystem__Array {
        inline app::AttachSpriteToPhysicsSystem__Array__Class** type_info() {
            static app::AttachSpriteToPhysicsSystem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttachSpriteToPhysicsSystem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttachSpriteToPhysicsSystem__Array__Class* get_class() {
            return il2cpp::get_class<app::AttachSpriteToPhysicsSystem__Array__Class>(type_info(), "", "AttachSpriteToPhysicsSystem[]");
        }
        inline app::AttachSpriteToPhysicsSystem__Array* create() {
            return il2cpp::create_object<app::AttachSpriteToPhysicsSystem__Array>(get_class());
        }
    } // namespace AttachSpriteToPhysicsSystem__Array
} // namespace app::classes::types
