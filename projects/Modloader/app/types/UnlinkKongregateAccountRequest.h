#pragma once
#include <Modloader/app/structs/UnlinkKongregateAccountRequest.h>
#include <Modloader/app/structs/UnlinkKongregateAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkKongregateAccountRequest {
        inline app::UnlinkKongregateAccountRequest__Class** type_info() {
            static app::UnlinkKongregateAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkKongregateAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x0474B6C0));
            }
            return cache;
        }
        inline app::UnlinkKongregateAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkKongregateAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlinkKongregateAccountRequest");
        }
        inline app::UnlinkKongregateAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkKongregateAccountRequest>(get_class());
        }
    } // namespace UnlinkKongregateAccountRequest
} // namespace app::classes::types
