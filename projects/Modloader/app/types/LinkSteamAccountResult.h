#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LinkSteamAccountResult__Class.h>
#include <Modloader/app/structs/LinkSteamAccountResult.h>

namespace app::classes::types {
    namespace LinkSteamAccountResult {
        inline app::LinkSteamAccountResult__Class** type_info = (app::LinkSteamAccountResult__Class**)(modloader::win::memory::resolve_rva(0x0474C598));
        inline app::LinkSteamAccountResult__Class* get_class() {
            return il2cpp::get_class<app::LinkSteamAccountResult__Class>(type_info, "PlayFab.ClientModels", "LinkSteamAccountResult");
        }
        inline app::LinkSteamAccountResult* create() {
            return il2cpp::create_object<app::LinkSteamAccountResult>(get_class());
        }
    } // namespace LinkSteamAccountResult
} // namespace app::classes::types
