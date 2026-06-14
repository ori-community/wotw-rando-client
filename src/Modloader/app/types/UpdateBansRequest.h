#pragma once
#include <Modloader/app/structs/UpdateBansRequest.h>
#include <Modloader/app/structs/UpdateBansRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateBansRequest {
        inline app::UpdateBansRequest__Class** type_info() {
            static app::UpdateBansRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateBansRequest__Class**)(modloader::win::memory::resolve_rva(0x04743660));
            }
            return cache;
        }
        inline app::UpdateBansRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateBansRequest__Class>(type_info(), "PlayFab.ServerModels", "UpdateBansRequest");
        }
        inline app::UpdateBansRequest* create() {
            return il2cpp::create_object<app::UpdateBansRequest>(get_class());
        }
    } // namespace UpdateBansRequest
} // namespace app::classes::types
