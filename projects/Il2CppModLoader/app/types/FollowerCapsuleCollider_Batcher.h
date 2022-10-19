#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FollowerCapsuleCollider_Batcher {
        namespace {
            inline app::FollowerCapsuleCollider_Batcher__Class* type_info_ref = nullptr;
        }
        inline app::FollowerCapsuleCollider_Batcher__Class** type_info = &type_info_ref;
        inline app::FollowerCapsuleCollider_Batcher__Class* get_class() {
            return il2cpp::get_nested_class<app::FollowerCapsuleCollider_Batcher__Class>(type_info, "", "FollowerCapsuleCollider", "Batcher");
        }
        inline app::FollowerCapsuleCollider_Batcher* create() {
            return il2cpp::create_object<app::FollowerCapsuleCollider_Batcher>(get_class());
        }
        inline app::FollowerCapsuleCollider_Batcher__Boxed* box(app::FollowerCapsuleCollider_Batcher value) {
            return il2cpp::box_value<app::FollowerCapsuleCollider_Batcher__Boxed>(get_class(), value);
        }
    } // namespace FollowerCapsuleCollider_Batcher
} // namespace app::classes::types
