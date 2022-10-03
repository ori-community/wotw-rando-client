#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleCatalogUpdatedEventData {
        namespace {
            app::TitleCatalogUpdatedEventData__Class* type_info_ref = nullptr;
        }
        app::TitleCatalogUpdatedEventData__Class** type_info = &type_info_ref;
        inline app::TitleCatalogUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleCatalogUpdatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleCatalogUpdatedEventData");
        }
        inline app::TitleCatalogUpdatedEventData* create() {
            return il2cpp::create_object<app::TitleCatalogUpdatedEventData>(get_class());
        }
    } // namespace TitleCatalogUpdatedEventData
} // namespace app::classes::types
