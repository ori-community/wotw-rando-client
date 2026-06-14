#pragma once
#include <Modloader/app/structs/FollowerCapsuleCollider_CapsulePlacementMode__Enum.h>
#include <Modloader/app/structs/FollowerCapsuleCollider_CapsulePlacementMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FollowerCapsuleCollider_CapsulePlacementMode__Enum {
        inline app::FollowerCapsuleCollider_CapsulePlacementMode__Enum__Class** type_info() {
            static app::FollowerCapsuleCollider_CapsulePlacementMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FollowerCapsuleCollider_CapsulePlacementMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FollowerCapsuleCollider_CapsulePlacementMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FollowerCapsuleCollider_CapsulePlacementMode__Enum__Class>(type_info(), "", "FollowerCapsuleCollider", "CapsulePlacementMode");
        }
        inline app::FollowerCapsuleCollider_CapsulePlacementMode__Enum* create() {
            return il2cpp::create_object<app::FollowerCapsuleCollider_CapsulePlacementMode__Enum>(get_class());
        }
    } // namespace FollowerCapsuleCollider_CapsulePlacementMode__Enum
} // namespace app::classes::types
