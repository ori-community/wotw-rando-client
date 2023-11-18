#pragma once
#include <Modloader/app/structs/LinkKongregateAccountRequest.h>
#include <Modloader/app/structs/LinkKongregateAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkKongregateAccountRequest {
        inline app::LinkKongregateAccountRequest__Class** type_info() {
            static app::LinkKongregateAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkKongregateAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04771668));
            }
            return cache;
        }
        inline app::LinkKongregateAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkKongregateAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "LinkKongregateAccountRequest");
        }
        inline app::LinkKongregateAccountRequest* create() {
            return il2cpp::create_object<app::LinkKongregateAccountRequest>(get_class());
        }
    } // namespace LinkKongregateAccountRequest
} // namespace app::classes::types
