#pragma once
#include <Modloader/app/structs/UnlinkTwitchAccountRequest.h>
#include <Modloader/app/structs/UnlinkTwitchAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkTwitchAccountRequest {
        inline app::UnlinkTwitchAccountRequest__Class** type_info() {
            static app::UnlinkTwitchAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkTwitchAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x0471DFB0));
            }
            return cache;
        }
        inline app::UnlinkTwitchAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkTwitchAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlinkTwitchAccountRequest");
        }
        inline app::UnlinkTwitchAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkTwitchAccountRequest>(get_class());
        }
    } // namespace UnlinkTwitchAccountRequest
} // namespace app::classes::types
