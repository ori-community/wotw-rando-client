#pragma once
#include <Modloader/app/structs/PlayerProfileViewConstraints_1.h>
#include <Modloader/app/structs/PlayerProfileViewConstraints_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerProfileViewConstraints_1 {
        inline app::PlayerProfileViewConstraints_1__Class** type_info() {
            static app::PlayerProfileViewConstraints_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerProfileViewConstraints_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerProfileViewConstraints_1__Class* get_class() {
            return il2cpp::get_class<app::PlayerProfileViewConstraints_1__Class>(type_info(), "PlayFab.ServerModels", "PlayerProfileViewConstraints");
        }
        inline app::PlayerProfileViewConstraints_1* create() {
            return il2cpp::create_object<app::PlayerProfileViewConstraints_1>(get_class());
        }
    } // namespace PlayerProfileViewConstraints_1
} // namespace app::classes::types
