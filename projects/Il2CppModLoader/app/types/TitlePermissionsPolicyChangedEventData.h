#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitlePermissionsPolicyChangedEventData {
        namespace {
            app::TitlePermissionsPolicyChangedEventData__Class* type_info_ref = nullptr;
        }
        app::TitlePermissionsPolicyChangedEventData__Class** type_info = &type_info_ref;
        inline app::TitlePermissionsPolicyChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitlePermissionsPolicyChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitlePermissionsPolicyChangedEventData");
        }
        inline app::TitlePermissionsPolicyChangedEventData* create() {
            return il2cpp::create_object<app::TitlePermissionsPolicyChangedEventData>(get_class());
        }
    } // namespace TitlePermissionsPolicyChangedEventData
} // namespace app::classes::types
