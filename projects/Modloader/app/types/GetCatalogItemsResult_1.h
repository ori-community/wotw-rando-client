#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetCatalogItemsResult_1 {
        inline app::GetCatalogItemsResult_1__Class** type_info = (app::GetCatalogItemsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04789618));
        inline app::GetCatalogItemsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetCatalogItemsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetCatalogItemsResult");
        }
        inline app::GetCatalogItemsResult_1* create() {
            return il2cpp::create_object<app::GetCatalogItemsResult_1>(get_class());
        }
    } // namespace GetCatalogItemsResult_1
} // namespace app::classes::types
