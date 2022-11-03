#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkTwitchAccountRequest {
        inline app::UnlinkTwitchAccountRequest__Class** type_info = (app::UnlinkTwitchAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x0471DFB0));
        inline app::UnlinkTwitchAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkTwitchAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkTwitchAccountRequest");
        }
        inline app::UnlinkTwitchAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkTwitchAccountRequest>(get_class());
        }
    } // namespace UnlinkTwitchAccountRequest
} // namespace app::classes::types
