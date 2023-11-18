#pragma once
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem__Array.h>
#include <Modloader/app/structs/AttachSpriteToPhysicsSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttachSpriteToPhysicsSystem {
        inline app::AttachSpriteToPhysicsSystem__Class** type_info() {
            static app::AttachSpriteToPhysicsSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttachSpriteToPhysicsSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttachSpriteToPhysicsSystem__Class* get_class() {
            return il2cpp::get_class<app::AttachSpriteToPhysicsSystem__Class>(type_info(), "", "AttachSpriteToPhysicsSystem");
        }
        inline app::AttachSpriteToPhysicsSystem* create() {
            return il2cpp::create_object<app::AttachSpriteToPhysicsSystem>(get_class());
        }
        inline app::AttachSpriteToPhysicsSystem__Array* create_array(int size) {
            return il2cpp::array_new<app::AttachSpriteToPhysicsSystem__Array>(get_class(), size);
        }
        inline app::AttachSpriteToPhysicsSystem__Array* create_array(const std::vector<app::AttachSpriteToPhysicsSystem*>& items) {
            return il2cpp::array_new<app::AttachSpriteToPhysicsSystem__Array>(get_class(), items);
        }
    } // namespace AttachSpriteToPhysicsSystem
} // namespace app::classes::types
