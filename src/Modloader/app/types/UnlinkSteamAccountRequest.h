#pragma once
#include <Modloader/app/structs/UnlinkSteamAccountRequest.h>
#include <Modloader/app/structs/UnlinkSteamAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkSteamAccountRequest {
        inline app::UnlinkSteamAccountRequest__Class** type_info() {
            static app::UnlinkSteamAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkSteamAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04716C80));
            }
            return cache;
        }
        inline app::UnlinkSteamAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkSteamAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlinkSteamAccountRequest");
        }
        inline app::UnlinkSteamAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkSteamAccountRequest>(get_class());
        }
    } // namespace UnlinkSteamAccountRequest
} // namespace app::classes::types
