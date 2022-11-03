#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkTwitchAccountResult {
        inline app::UnlinkTwitchAccountResult__Class** type_info = (app::UnlinkTwitchAccountResult__Class**)(modloader::win::memory::resolve_rva(0x047139C0));
        inline app::UnlinkTwitchAccountResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkTwitchAccountResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkTwitchAccountResult");
        }
        inline app::UnlinkTwitchAccountResult* create() {
            return il2cpp::create_object<app::UnlinkTwitchAccountResult>(get_class());
        }
    } // namespace UnlinkTwitchAccountResult
} // namespace app::classes::types
