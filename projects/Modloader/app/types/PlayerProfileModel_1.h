#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerProfileModel_1__Class.h>
#include <Modloader/app/structs/PlayerProfileModel_1.h>

namespace app::classes::types {
    namespace PlayerProfileModel_1 {
        namespace {
            inline app::PlayerProfileModel_1__Class* type_info_ref = nullptr;
        }
        inline app::PlayerProfileModel_1__Class** type_info = &type_info_ref;
        inline app::PlayerProfileModel_1__Class* get_class() {
            return il2cpp::get_class<app::PlayerProfileModel_1__Class>(type_info, "PlayFab.ServerModels", "PlayerProfileModel");
        }
        inline app::PlayerProfileModel_1* create() {
            return il2cpp::create_object<app::PlayerProfileModel_1>(get_class());
        }
    } // namespace PlayerProfileModel_1
} // namespace app::classes::types
