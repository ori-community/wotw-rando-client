#pragma once
#include <Modloader/app/structs/UserSteamInfo.h>
#include <Modloader/app/structs/UserSteamInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserSteamInfo {
        inline app::UserSteamInfo__Class** type_info() {
            static app::UserSteamInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserSteamInfo__Class**)(modloader::win::memory::resolve_rva(0x047547E0));
            }
            return cache;
        }
        inline app::UserSteamInfo__Class* get_class() {
            return il2cpp::get_class<app::UserSteamInfo__Class>(type_info(), "PlayFab.ClientModels", "UserSteamInfo");
        }
        inline app::UserSteamInfo* create() {
            return il2cpp::create_object<app::UserSteamInfo>(get_class());
        }
    } // namespace UserSteamInfo
} // namespace app::classes::types
