#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkSteamAccountResult {
        inline app::UnlinkSteamAccountResult__Class** type_info = (app::UnlinkSteamAccountResult__Class**)(modloader::win::memory::resolve_rva(0x04774A78));
        inline app::UnlinkSteamAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkSteamAccountResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkSteamAccountResult");
        }
        inline app::UnlinkSteamAccountResult* create() {
            return il2cpp::create_object<app::UnlinkSteamAccountResult>(get_class());
        }
    } // namespace UnlinkSteamAccountResult
} // namespace app::classes::types
