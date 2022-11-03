#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AttachSpriteToPhysicsSystem__Array {
        namespace {
            inline app::AttachSpriteToPhysicsSystem__Array__Class* type_info_ref = nullptr;
        }
        inline app::AttachSpriteToPhysicsSystem__Array__Class** type_info = &type_info_ref;
        inline app::AttachSpriteToPhysicsSystem__Array__Class* get_class() {
            return il2cpp::get_class<app::AttachSpriteToPhysicsSystem__Array__Class>(type_info, "", "AttachSpriteToPhysicsSystem[]");
        }
        inline app::AttachSpriteToPhysicsSystem__Array* create() {
            return il2cpp::create_object<app::AttachSpriteToPhysicsSystem__Array>(get_class());
        }
    } // namespace AttachSpriteToPhysicsSystem__Array
} // namespace app::classes::types
