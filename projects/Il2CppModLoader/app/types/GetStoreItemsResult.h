#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetStoreItemsResult {
        inline app::GetStoreItemsResult__Class** type_info = (app::GetStoreItemsResult__Class**)(modloader::win::memory::resolve_rva(0x0471CBF8));
        inline app::GetStoreItemsResult__Class* get_class() {
            return il2cpp::get_class<app::GetStoreItemsResult__Class>(type_info, "PlayFab.ClientModels", "GetStoreItemsResult");
        }
        inline app::GetStoreItemsResult* create() {
            return il2cpp::create_object<app::GetStoreItemsResult>(get_class());
        }
    } // namespace GetStoreItemsResult
} // namespace app::classes::types
