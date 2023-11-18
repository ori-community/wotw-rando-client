#pragma once
#include <Modloader/app/structs/LinkSteamAccountResult.h>
#include <Modloader/app/structs/LinkSteamAccountResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkSteamAccountResult {
        inline app::LinkSteamAccountResult__Class** type_info() {
            static app::LinkSteamAccountResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkSteamAccountResult__Class**)(modloader::win::memory::resolve_rva(0x0474C598));
            }
            return cache;
        }
        inline app::LinkSteamAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkSteamAccountResult__Class>(type_info(), "PlayFab.ClientModels", "LinkSteamAccountResult");
        }
        inline app::LinkSteamAccountResult* create() {
            return il2cpp::create_object<app::LinkSteamAccountResult>(get_class());
        }
    } // namespace LinkSteamAccountResult
} // namespace app::classes::types
