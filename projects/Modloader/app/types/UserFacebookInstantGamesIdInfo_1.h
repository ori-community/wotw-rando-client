#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserFacebookInstantGamesIdInfo_1 {
        namespace {
            inline app::UserFacebookInstantGamesIdInfo_1__Class* type_info_ref = nullptr;
        }
        inline app::UserFacebookInstantGamesIdInfo_1__Class** type_info = &type_info_ref;
        inline app::UserFacebookInstantGamesIdInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserFacebookInstantGamesIdInfo_1__Class>(type_info, "PlayFab.ServerModels", "UserFacebookInstantGamesIdInfo");
        }
        inline app::UserFacebookInstantGamesIdInfo_1* create() {
            return il2cpp::create_object<app::UserFacebookInstantGamesIdInfo_1>(get_class());
        }
    } // namespace UserFacebookInstantGamesIdInfo_1
} // namespace app::classes::types
