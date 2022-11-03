#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FollowerCapsuleCollider_CapsulePlacementMode__Enum {
        namespace {
            inline app::FollowerCapsuleCollider_CapsulePlacementMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FollowerCapsuleCollider_CapsulePlacementMode__Enum__Class** type_info = &type_info_ref;
        inline app::FollowerCapsuleCollider_CapsulePlacementMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FollowerCapsuleCollider_CapsulePlacementMode__Enum__Class>(type_info, "", "FollowerCapsuleCollider", "CapsulePlacementMode");
        }
        inline app::FollowerCapsuleCollider_CapsulePlacementMode__Enum* create() {
            return il2cpp::create_object<app::FollowerCapsuleCollider_CapsulePlacementMode__Enum>(get_class());
        }
    } // namespace FollowerCapsuleCollider_CapsulePlacementMode__Enum
} // namespace app::classes::types
