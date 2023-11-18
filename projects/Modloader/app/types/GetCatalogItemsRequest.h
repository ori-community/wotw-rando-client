#pragma once
#include <Modloader/app/structs/GetCatalogItemsRequest.h>
#include <Modloader/app/structs/GetCatalogItemsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetCatalogItemsRequest {
        inline app::GetCatalogItemsRequest__Class** type_info() {
            static app::GetCatalogItemsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetCatalogItemsRequest__Class**)(modloader::win::memory::resolve_rva(0x04719018));
            }
            return cache;
        }
        inline app::GetCatalogItemsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetCatalogItemsRequest__Class>(type_info(), "PlayFab.ClientModels", "GetCatalogItemsRequest");
        }
        inline app::GetCatalogItemsRequest* create() {
            return il2cpp::create_object<app::GetCatalogItemsRequest>(get_class());
        }
    } // namespace GetCatalogItemsRequest
} // namespace app::classes::types
