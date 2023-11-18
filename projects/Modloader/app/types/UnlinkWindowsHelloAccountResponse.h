#pragma once
#include <Modloader/app/structs/UnlinkWindowsHelloAccountResponse.h>
#include <Modloader/app/structs/UnlinkWindowsHelloAccountResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkWindowsHelloAccountResponse {
        inline app::UnlinkWindowsHelloAccountResponse__Class** type_info() {
            static app::UnlinkWindowsHelloAccountResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkWindowsHelloAccountResponse__Class**)(modloader::win::memory::resolve_rva(0x04704E00));
            }
            return cache;
        }
        inline app::UnlinkWindowsHelloAccountResponse__Class* get_class() {
            return il2cpp::get_class<app::UnlinkWindowsHelloAccountResponse__Class>(type_info(), "PlayFab.ClientModels", "UnlinkWindowsHelloAccountResponse");
        }
        inline app::UnlinkWindowsHelloAccountResponse* create() {
            return il2cpp::create_object<app::UnlinkWindowsHelloAccountResponse>(get_class());
        }
    } // namespace UnlinkWindowsHelloAccountResponse
} // namespace app::classes::types
