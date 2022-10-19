#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkSteamAccountRequest {
        inline app::LinkSteamAccountRequest__Class** type_info = (app::LinkSteamAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04755EF8));
        inline app::LinkSteamAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkSteamAccountRequest__Class>(type_info, "PlayFab.ClientModels", "LinkSteamAccountRequest");
        }
        inline app::LinkSteamAccountRequest* create() {
            return il2cpp::create_object<app::LinkSteamAccountRequest>(get_class());
        }
    } // namespace LinkSteamAccountRequest
} // namespace app::classes::types
