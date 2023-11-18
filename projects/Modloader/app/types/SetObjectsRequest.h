#pragma once
#include <Modloader/app/structs/SetObjectsRequest.h>
#include <Modloader/app/structs/SetObjectsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetObjectsRequest {
        inline app::SetObjectsRequest__Class** type_info() {
            static app::SetObjectsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetObjectsRequest__Class**)(modloader::win::memory::resolve_rva(0x04743C88));
            }
            return cache;
        }
        inline app::SetObjectsRequest__Class* get_class() {
            return il2cpp::get_class<app::SetObjectsRequest__Class>(type_info(), "PlayFab.DataModels", "SetObjectsRequest");
        }
        inline app::SetObjectsRequest* create() {
            return il2cpp::create_object<app::SetObjectsRequest>(get_class());
        }
    } // namespace SetObjectsRequest
} // namespace app::classes::types
