#pragma once
#include <Modloader/app/structs/GetStoreItemsRequest.h>
#include <Modloader/app/structs/GetStoreItemsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetStoreItemsRequest {
        inline app::GetStoreItemsRequest__Class** type_info() {
            static app::GetStoreItemsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetStoreItemsRequest__Class**)(modloader::win::memory::resolve_rva(0x04795148));
            }
            return cache;
        }
        inline app::GetStoreItemsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetStoreItemsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetStoreItemsRequest");
        }
        inline app::GetStoreItemsRequest* create() {
            return il2cpp::create_object<app::GetStoreItemsRequest>(get_class());
        }
    } // namespace GetStoreItemsRequest
} // namespace app::classes::types
