#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkFacebookInstantGamesIdResult {
        inline app::UnlinkFacebookInstantGamesIdResult__Class** type_info = (app::UnlinkFacebookInstantGamesIdResult__Class**)(modloader::win::memory::resolve_rva(0x04704E18));
        inline app::UnlinkFacebookInstantGamesIdResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkFacebookInstantGamesIdResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkFacebookInstantGamesIdResult");
        }
        inline app::UnlinkFacebookInstantGamesIdResult* create() {
            return il2cpp::create_object<app::UnlinkFacebookInstantGamesIdResult>(get_class());
        }
    } // namespace UnlinkFacebookInstantGamesIdResult
} // namespace app::classes::types
