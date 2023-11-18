#pragma once
#include <Modloader/app/structs/GetCatalogItemsResult_1.h>
#include <Modloader/app/structs/GetCatalogItemsResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetCatalogItemsResult_1 {
        inline app::GetCatalogItemsResult_1__Class** type_info() {
            static app::GetCatalogItemsResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetCatalogItemsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04789618));
            }
            return cache;
        }
        inline app::GetCatalogItemsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetCatalogItemsResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetCatalogItemsResult");
        }
        inline app::GetCatalogItemsResult_1* create() {
            return il2cpp::create_object<app::GetCatalogItemsResult_1>(get_class());
        }
    } // namespace GetCatalogItemsResult_1
} // namespace app::classes::types
