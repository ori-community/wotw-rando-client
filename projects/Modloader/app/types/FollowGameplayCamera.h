#pragma once
#include <Modloader/app/structs/FollowGameplayCamera.h>
#include <Modloader/app/structs/FollowGameplayCamera__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FollowGameplayCamera {
        inline app::FollowGameplayCamera__Class** type_info() {
            static app::FollowGameplayCamera__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FollowGameplayCamera__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FollowGameplayCamera__Class* get_class() {
            return il2cpp::get_class<app::FollowGameplayCamera__Class>(type_info(), "", "FollowGameplayCamera");
        }
        inline app::FollowGameplayCamera* create() {
            return il2cpp::create_object<app::FollowGameplayCamera>(get_class());
        }
    } // namespace FollowGameplayCamera
} // namespace app::classes::types
