#pragma once
#include <Modloader/app/structs/FollowPositionRotation.h>
#include <Modloader/app/structs/FollowPositionRotation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FollowPositionRotation {
        inline app::FollowPositionRotation__Class** type_info() {
            static app::FollowPositionRotation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FollowPositionRotation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FollowPositionRotation__Class* get_class() {
            return il2cpp::get_class<app::FollowPositionRotation__Class>(type_info(), "", "FollowPositionRotation");
        }
        inline app::FollowPositionRotation* create() {
            return il2cpp::create_object<app::FollowPositionRotation>(get_class());
        }
    } // namespace FollowPositionRotation
} // namespace app::classes::types
