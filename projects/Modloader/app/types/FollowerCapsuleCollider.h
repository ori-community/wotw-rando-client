#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FollowerCapsuleCollider {
        inline app::FollowerCapsuleCollider__Class** type_info = (app::FollowerCapsuleCollider__Class**)(modloader::win::memory::resolve_rva(0x047395B8));
        inline app::FollowerCapsuleCollider__Class* get_class() {
            return il2cpp::get_class<app::FollowerCapsuleCollider__Class>(type_info, "", "FollowerCapsuleCollider");
        }
        inline app::FollowerCapsuleCollider* create() {
            return il2cpp::create_object<app::FollowerCapsuleCollider>(get_class());
        }
    } // namespace FollowerCapsuleCollider
} // namespace app::classes::types
