#pragma once
#include <Modloader/app/structs/TitleCatalogUpdatedEventData.h>
#include <Modloader/app/structs/TitleCatalogUpdatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleCatalogUpdatedEventData {
        inline app::TitleCatalogUpdatedEventData__Class** type_info() {
            static app::TitleCatalogUpdatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleCatalogUpdatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleCatalogUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleCatalogUpdatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleCatalogUpdatedEventData");
        }
        inline app::TitleCatalogUpdatedEventData* create() {
            return il2cpp::create_object<app::TitleCatalogUpdatedEventData>(get_class());
        }
    } // namespace TitleCatalogUpdatedEventData
} // namespace app::classes::types
