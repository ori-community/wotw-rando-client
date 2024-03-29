#pragma once
#include <Modloader/app/structs/PlayerProfile_1.h>
#include <Modloader/app/structs/PlayerProfile_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerProfile_1 {
        inline app::PlayerProfile_1__Class** type_info() {
            static app::PlayerProfile_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerProfile_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerProfile_1__Class* get_class() {
            return il2cpp::get_class<app::PlayerProfile_1__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerProfile");
        }
        inline app::PlayerProfile_1* create() {
            return il2cpp::create_object<app::PlayerProfile_1>(get_class());
        }
    } // namespace PlayerProfile_1
} // namespace app::classes::types
