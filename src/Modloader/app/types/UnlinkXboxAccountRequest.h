#pragma once
#include <Modloader/app/structs/UnlinkXboxAccountRequest.h>
#include <Modloader/app/structs/UnlinkXboxAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkXboxAccountRequest {
        inline app::UnlinkXboxAccountRequest__Class** type_info() {
            static app::UnlinkXboxAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkXboxAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04703F30));
            }
            return cache;
        }
        inline app::UnlinkXboxAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkXboxAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlinkXboxAccountRequest");
        }
        inline app::UnlinkXboxAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkXboxAccountRequest>(get_class());
        }
    } // namespace UnlinkXboxAccountRequest
} // namespace app::classes::types
