#pragma once
#include <Modloader/app/structs/GetUserInventoryRequest.h>
#include <Modloader/app/structs/GetUserInventoryRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetUserInventoryRequest {
        inline app::GetUserInventoryRequest__Class** type_info() {
            static app::GetUserInventoryRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetUserInventoryRequest__Class**)(modloader::win::memory::resolve_rva(0x0477CF48));
            }
            return cache;
        }
        inline app::GetUserInventoryRequest__Class* get_class() {
            return il2cpp::get_class<app::GetUserInventoryRequest__Class>(type_info(), "PlayFab.ClientModels", "GetUserInventoryRequest");
        }
        inline app::GetUserInventoryRequest* create() {
            return il2cpp::create_object<app::GetUserInventoryRequest>(get_class());
        }
    } // namespace GetUserInventoryRequest
} // namespace app::classes::types
