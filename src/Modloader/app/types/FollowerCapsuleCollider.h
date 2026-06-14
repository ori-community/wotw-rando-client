#pragma once
#include <Modloader/app/structs/FollowerCapsuleCollider.h>
#include <Modloader/app/structs/FollowerCapsuleCollider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FollowerCapsuleCollider {
        inline app::FollowerCapsuleCollider__Class** type_info() {
            static app::FollowerCapsuleCollider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FollowerCapsuleCollider__Class**)(modloader::win::memory::resolve_rva(0x047395B8));
            }
            return cache;
        }
        inline app::FollowerCapsuleCollider__Class* get_class() {
            return il2cpp::get_class<app::FollowerCapsuleCollider__Class>(type_info(), "", "FollowerCapsuleCollider");
        }
        inline app::FollowerCapsuleCollider* create() {
            return il2cpp::create_object<app::FollowerCapsuleCollider>(get_class());
        }
    } // namespace FollowerCapsuleCollider
} // namespace app::classes::types
