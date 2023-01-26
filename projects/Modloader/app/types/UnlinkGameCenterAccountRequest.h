#pragma once
#include <Modloader/app/structs/UnlinkGameCenterAccountRequest.h>
#include <Modloader/app/structs/UnlinkGameCenterAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkGameCenterAccountRequest {
        inline app::UnlinkGameCenterAccountRequest__Class** type_info() {
            static app::UnlinkGameCenterAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkGameCenterAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04746880));
            }
            return cache;
        }
        inline app::UnlinkGameCenterAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkGameCenterAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlinkGameCenterAccountRequest");
        }
        inline app::UnlinkGameCenterAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkGameCenterAccountRequest>(get_class());
        }
    } // namespace UnlinkGameCenterAccountRequest
} // namespace app::classes::types
