#pragma once
#include <Modloader/app/structs/UnlinkGoogleAccountRequest.h>
#include <Modloader/app/structs/UnlinkGoogleAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkGoogleAccountRequest {
        inline app::UnlinkGoogleAccountRequest__Class** type_info() {
            static app::UnlinkGoogleAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkGoogleAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04724558));
            }
            return cache;
        }
        inline app::UnlinkGoogleAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkGoogleAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlinkGoogleAccountRequest");
        }
        inline app::UnlinkGoogleAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkGoogleAccountRequest>(get_class());
        }
    } // namespace UnlinkGoogleAccountRequest
} // namespace app::classes::types
