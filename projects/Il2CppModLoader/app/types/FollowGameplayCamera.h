#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FollowGameplayCamera {
        namespace {
            app::FollowGameplayCamera__Class* type_info_ref = nullptr;
        }
        app::FollowGameplayCamera__Class** type_info = &type_info_ref;
        inline app::FollowGameplayCamera__Class* get_class() {
            return il2cpp::get_class<app::FollowGameplayCamera__Class>(type_info, "", "FollowGameplayCamera");
        }
        inline app::FollowGameplayCamera* create() {
            return il2cpp::create_object<app::FollowGameplayCamera>(get_class());
        }
    } // namespace FollowGameplayCamera
} // namespace app::classes::types
