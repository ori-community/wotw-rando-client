#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachSpriteToPhysicsSystem {
        namespace {
            app::AttachSpriteToPhysicsSystem__Class* type_info_ref = nullptr;
        }
        app::AttachSpriteToPhysicsSystem__Class** type_info = &type_info_ref;
        inline app::AttachSpriteToPhysicsSystem__Class* get_class() {
            return il2cpp::get_class<app::AttachSpriteToPhysicsSystem__Class>(type_info, "", "AttachSpriteToPhysicsSystem");
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
