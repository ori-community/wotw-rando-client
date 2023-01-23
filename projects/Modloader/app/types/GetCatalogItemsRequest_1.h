#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetCatalogItemsRequest_1__Class.h>
#include <Modloader/app/structs/GetCatalogItemsRequest_1.h>

namespace app::classes::types {
    namespace GetCatalogItemsRequest_1 {
        inline app::GetCatalogItemsRequest_1__Class** type_info = (app::GetCatalogItemsRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04779728));
        inline app::GetCatalogItemsRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetCatalogItemsRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetCatalogItemsRequest");
        }
        inline app::GetCatalogItemsRequest_1* create() {
            return il2cpp::create_object<app::GetCatalogItemsRequest_1>(get_class());
        }
    } // namespace GetCatalogItemsRequest_1
} // namespace app::classes::types
