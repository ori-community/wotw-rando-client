#pragma once
#include <Modloader/app/structs/LinkSteamAccountRequest.h>
#include <Modloader/app/structs/LinkSteamAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkSteamAccountRequest {
        inline app::LinkSteamAccountRequest__Class** type_info() {
            static app::LinkSteamAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkSteamAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04755EF8));
            }
            return cache;
        }
        inline app::LinkSteamAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkSteamAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "LinkSteamAccountRequest");
        }
        inline app::LinkSteamAccountRequest* create() {
            return il2cpp::create_object<app::LinkSteamAccountRequest>(get_class());
        }
    } // namespace LinkSteamAccountRequest
} // namespace app::classes::types
