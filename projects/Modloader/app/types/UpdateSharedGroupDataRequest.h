#pragma once
#include <Modloader/app/structs/UpdateSharedGroupDataRequest.h>
#include <Modloader/app/structs/UpdateSharedGroupDataRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateSharedGroupDataRequest {
        inline app::UpdateSharedGroupDataRequest__Class** type_info() {
            static app::UpdateSharedGroupDataRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateSharedGroupDataRequest__Class**)(modloader::win::memory::resolve_rva(0x0477EE80));
            }
            return cache;
        }
        inline app::UpdateSharedGroupDataRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateSharedGroupDataRequest__Class>(type_info(), "PlayFab.ClientModels", "UpdateSharedGroupDataRequest");
        }
        inline app::UpdateSharedGroupDataRequest* create() {
            return il2cpp::create_object<app::UpdateSharedGroupDataRequest>(get_class());
        }
    } // namespace UpdateSharedGroupDataRequest
} // namespace app::classes::types
