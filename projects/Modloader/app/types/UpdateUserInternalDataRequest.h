#pragma once
#include <Modloader/app/structs/UpdateUserInternalDataRequest.h>
#include <Modloader/app/structs/UpdateUserInternalDataRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateUserInternalDataRequest {
        inline app::UpdateUserInternalDataRequest__Class** type_info() {
            static app::UpdateUserInternalDataRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateUserInternalDataRequest__Class**)(modloader::win::memory::resolve_rva(0x0470B5E0));
            }
            return cache;
        }
        inline app::UpdateUserInternalDataRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserInternalDataRequest__Class>(type_info(), "PlayFab.ServerModels", "UpdateUserInternalDataRequest");
        }
        inline app::UpdateUserInternalDataRequest* create() {
            return il2cpp::create_object<app::UpdateUserInternalDataRequest>(get_class());
        }
    } // namespace UpdateUserInternalDataRequest
} // namespace app::classes::types
