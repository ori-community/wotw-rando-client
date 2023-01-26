#pragma once
#include <Modloader/app/structs/UnlinkPSNAccountRequest.h>
#include <Modloader/app/structs/UnlinkPSNAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkPSNAccountRequest {
        inline app::UnlinkPSNAccountRequest__Class** type_info() {
            static app::UnlinkPSNAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkPSNAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04732900));
            }
            return cache;
        }
        inline app::UnlinkPSNAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkPSNAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlinkPSNAccountRequest");
        }
        inline app::UnlinkPSNAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkPSNAccountRequest>(get_class());
        }
    } // namespace UnlinkPSNAccountRequest
} // namespace app::classes::types
