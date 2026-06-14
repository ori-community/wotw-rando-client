#pragma once
#include <Modloader/app/structs/GetStoreItemsResult.h>
#include <Modloader/app/structs/GetStoreItemsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetStoreItemsResult {
        inline app::GetStoreItemsResult__Class** type_info() {
            static app::GetStoreItemsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetStoreItemsResult__Class**)(modloader::win::memory::resolve_rva(0x0471CBF8));
            }
            return cache;
        }
        inline app::GetStoreItemsResult__Class* get_class() {
            return il2cpp::get_class<app::GetStoreItemsResult__Class>(type_info(), "PlayFab.ClientModels", "GetStoreItemsResult");
        }
        inline app::GetStoreItemsResult* create() {
            return il2cpp::create_object<app::GetStoreItemsResult>(get_class());
        }
    } // namespace GetStoreItemsResult
} // namespace app::classes::types
