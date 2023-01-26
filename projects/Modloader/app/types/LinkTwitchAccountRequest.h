#pragma once
#include <Modloader/app/structs/LinkTwitchAccountRequest.h>
#include <Modloader/app/structs/LinkTwitchAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkTwitchAccountRequest {
        inline app::LinkTwitchAccountRequest__Class** type_info() {
            static app::LinkTwitchAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkTwitchAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04744A10));
            }
            return cache;
        }
        inline app::LinkTwitchAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkTwitchAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "LinkTwitchAccountRequest");
        }
        inline app::LinkTwitchAccountRequest* create() {
            return il2cpp::create_object<app::LinkTwitchAccountRequest>(get_class());
        }
    } // namespace LinkTwitchAccountRequest
} // namespace app::classes::types
