#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetCatalogItemsResult__Class.h>
#include <Modloader/app/structs/GetCatalogItemsResult.h>

namespace app::classes::types {
    namespace GetCatalogItemsResult {
        inline app::GetCatalogItemsResult__Class** type_info = (app::GetCatalogItemsResult__Class**)(modloader::win::memory::resolve_rva(0x047281F8));
        inline app::GetCatalogItemsResult__Class* get_class() {
            return il2cpp::get_class<app::GetCatalogItemsResult__Class>(type_info, "PlayFab.ClientModels", "GetCatalogItemsResult");
        }
        inline app::GetCatalogItemsResult* create() {
            return il2cpp::create_object<app::GetCatalogItemsResult>(get_class());
        }
    } // namespace GetCatalogItemsResult
} // namespace app::classes::types
