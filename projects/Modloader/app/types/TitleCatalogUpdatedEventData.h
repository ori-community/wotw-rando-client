#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TitleCatalogUpdatedEventData__Class.h>
#include <Modloader/app/structs/TitleCatalogUpdatedEventData.h>

namespace app::classes::types {
    namespace TitleCatalogUpdatedEventData {
        namespace {
            inline app::TitleCatalogUpdatedEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleCatalogUpdatedEventData__Class** type_info = &type_info_ref;
        inline app::TitleCatalogUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleCatalogUpdatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleCatalogUpdatedEventData");
        }
        inline app::TitleCatalogUpdatedEventData* create() {
            return il2cpp::create_object<app::TitleCatalogUpdatedEventData>(get_class());
        }
    } // namespace TitleCatalogUpdatedEventData
} // namespace app::classes::types
