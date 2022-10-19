#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkSteamAccountRequest {
        inline app::UnlinkSteamAccountRequest__Class** type_info = (app::UnlinkSteamAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04716C80));
        inline app::UnlinkSteamAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkSteamAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkSteamAccountRequest");
        }
        inline app::UnlinkSteamAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkSteamAccountRequest>(get_class());
        }
    } // namespace UnlinkSteamAccountRequest
} // namespace app::classes::types
