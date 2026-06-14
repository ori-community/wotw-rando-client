#pragma once
#include <Modloader/app/structs/UserFacebookInstantGamesIdInfo.h>
#include <Modloader/app/structs/UserFacebookInstantGamesIdInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserFacebookInstantGamesIdInfo {
        inline app::UserFacebookInstantGamesIdInfo__Class** type_info() {
            static app::UserFacebookInstantGamesIdInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserFacebookInstantGamesIdInfo__Class**)(modloader::win::memory::resolve_rva(0x047380B0));
            }
            return cache;
        }
        inline app::UserFacebookInstantGamesIdInfo__Class* get_class() {
            return il2cpp::get_class<app::UserFacebookInstantGamesIdInfo__Class>(type_info(), "PlayFab.ClientModels", "UserFacebookInstantGamesIdInfo");
        }
        inline app::UserFacebookInstantGamesIdInfo* create() {
            return il2cpp::create_object<app::UserFacebookInstantGamesIdInfo>(get_class());
        }
    } // namespace UserFacebookInstantGamesIdInfo
} // namespace app::classes::types
