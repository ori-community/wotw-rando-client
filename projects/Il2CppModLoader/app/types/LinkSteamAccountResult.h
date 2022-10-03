#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkSteamAccountResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkSteamAccountResult__Class** type_info;
        inline app::LinkSteamAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkSteamAccountResult__Class>(type_info, "PlayFab.ClientModels", "LinkSteamAccountResult");
        }
        inline app::LinkSteamAccountResult* create() {
            return il2cpp::create_object<app::LinkSteamAccountResult>(get_class());
        }
    } // namespace LinkSteamAccountResult
} // namespace app::classes::types
