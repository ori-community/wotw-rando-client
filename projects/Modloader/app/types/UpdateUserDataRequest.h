#pragma once
#include <Modloader/app/structs/UpdateUserDataRequest.h>
#include <Modloader/app/structs/UpdateUserDataRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateUserDataRequest {
        inline app::UpdateUserDataRequest__Class** type_info() {
            static app::UpdateUserDataRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateUserDataRequest__Class**)(modloader::win::memory::resolve_rva(0x047573A8));
            }
            return cache;
        }
        inline app::UpdateUserDataRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserDataRequest__Class>(type_info(), "PlayFab.ClientModels", "UpdateUserDataRequest");
        }
        inline app::UpdateUserDataRequest* create() {
            return il2cpp::create_object<app::UpdateUserDataRequest>(get_class());
        }
    } // namespace UpdateUserDataRequest
} // namespace app::classes::types
