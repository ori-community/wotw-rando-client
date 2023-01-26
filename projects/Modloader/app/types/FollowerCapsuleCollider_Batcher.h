#pragma once
#include <Modloader/app/structs/FollowerCapsuleCollider_Batcher.h>
#include <Modloader/app/structs/FollowerCapsuleCollider_Batcher__Boxed.h>
#include <Modloader/app/structs/FollowerCapsuleCollider_Batcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FollowerCapsuleCollider_Batcher {
        inline app::FollowerCapsuleCollider_Batcher__Class** type_info() {
            static app::FollowerCapsuleCollider_Batcher__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FollowerCapsuleCollider_Batcher__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FollowerCapsuleCollider_Batcher__Class* get_class() {
            return il2cpp::get_nested_class<app::FollowerCapsuleCollider_Batcher__Class>(type_info(), "", "FollowerCapsuleCollider", "Batcher");
        }
        inline app::FollowerCapsuleCollider_Batcher* create() {
            return il2cpp::create_object<app::FollowerCapsuleCollider_Batcher>(get_class());
        }
        inline app::FollowerCapsuleCollider_Batcher__Boxed* box(app::FollowerCapsuleCollider_Batcher value) {
            return il2cpp::box_value<app::FollowerCapsuleCollider_Batcher__Boxed>(get_class(), value);
        }
    } // namespace FollowerCapsuleCollider_Batcher
} // namespace app::classes::types
