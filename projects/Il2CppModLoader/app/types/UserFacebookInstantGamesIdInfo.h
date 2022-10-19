#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserFacebookInstantGamesIdInfo {
        inline app::UserFacebookInstantGamesIdInfo__Class** type_info = (app::UserFacebookInstantGamesIdInfo__Class**)(modloader::win::memory::resolve_rva(0x047380B0));
        inline app::UserFacebookInstantGamesIdInfo__Class* get_class() {
            return il2cpp::get_class<app::UserFacebookInstantGamesIdInfo__Class>(type_info, "PlayFab.ClientModels", "UserFacebookInstantGamesIdInfo");
        }
        inline app::UserFacebookInstantGamesIdInfo* create() {
            return il2cpp::create_object<app::UserFacebookInstantGamesIdInfo>(get_class());
        }
    } // namespace UserFacebookInstantGamesIdInfo
} // namespace app::classes::types
