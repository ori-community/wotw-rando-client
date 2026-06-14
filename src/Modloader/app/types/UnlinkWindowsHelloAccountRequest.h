#pragma once
#include <Modloader/app/structs/UnlinkWindowsHelloAccountRequest.h>
#include <Modloader/app/structs/UnlinkWindowsHelloAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkWindowsHelloAccountRequest {
        inline app::UnlinkWindowsHelloAccountRequest__Class** type_info() {
            static app::UnlinkWindowsHelloAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkWindowsHelloAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x047078A0));
            }
            return cache;
        }
        inline app::UnlinkWindowsHelloAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkWindowsHelloAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlinkWindowsHelloAccountRequest");
        }
        inline app::UnlinkWindowsHelloAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkWindowsHelloAccountRequest>(get_class());
        }
    } // namespace UnlinkWindowsHelloAccountRequest
} // namespace app::classes::types
