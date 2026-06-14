#pragma once
#include <Modloader/app/structs/TitlePermissionsPolicyChangedEventData.h>
#include <Modloader/app/structs/TitlePermissionsPolicyChangedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitlePermissionsPolicyChangedEventData {
        inline app::TitlePermissionsPolicyChangedEventData__Class** type_info() {
            static app::TitlePermissionsPolicyChangedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitlePermissionsPolicyChangedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitlePermissionsPolicyChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitlePermissionsPolicyChangedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitlePermissionsPolicyChangedEventData");
        }
        inline app::TitlePermissionsPolicyChangedEventData* create() {
            return il2cpp::create_object<app::TitlePermissionsPolicyChangedEventData>(get_class());
        }
    } // namespace TitlePermissionsPolicyChangedEventData
} // namespace app::classes::types
