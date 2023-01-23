#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CatalogItemConsumableInfo__Class.h>
#include <Modloader/app/structs/CatalogItemConsumableInfo.h>

namespace app::classes::types {
    namespace CatalogItemConsumableInfo {
        namespace {
            inline app::CatalogItemConsumableInfo__Class* type_info_ref = nullptr;
        }
        inline app::CatalogItemConsumableInfo__Class** type_info = &type_info_ref;
        inline app::CatalogItemConsumableInfo__Class* get_class() {
            return il2cpp::get_class<app::CatalogItemConsumableInfo__Class>(type_info, "PlayFab.ClientModels", "CatalogItemConsumableInfo");
        }
        inline app::CatalogItemConsumableInfo* create() {
            return il2cpp::create_object<app::CatalogItemConsumableInfo>(get_class());
        }
    } // namespace CatalogItemConsumableInfo
} // namespace app::classes::types
