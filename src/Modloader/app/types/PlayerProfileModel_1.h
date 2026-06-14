#pragma once
#include <Modloader/app/structs/PlayerProfileModel_1.h>
#include <Modloader/app/structs/PlayerProfileModel_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerProfileModel_1 {
        inline app::PlayerProfileModel_1__Class** type_info() {
            static app::PlayerProfileModel_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerProfileModel_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerProfileModel_1__Class* get_class() {
            return il2cpp::get_class<app::PlayerProfileModel_1__Class>(type_info(), "PlayFab.ServerModels", "PlayerProfileModel");
        }
        inline app::PlayerProfileModel_1* create() {
            return il2cpp::create_object<app::PlayerProfileModel_1>(get_class());
        }
    } // namespace PlayerProfileModel_1
} // namespace app::classes::types
