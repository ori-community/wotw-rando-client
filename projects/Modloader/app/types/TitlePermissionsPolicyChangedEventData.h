#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TitlePermissionsPolicyChangedEventData__Class.h>
#include <Modloader/app/structs/TitlePermissionsPolicyChangedEventData.h>

namespace app::classes::types {
    namespace TitlePermissionsPolicyChangedEventData {
        namespace {
            inline app::TitlePermissionsPolicyChangedEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitlePermissionsPolicyChangedEventData__Class** type_info = &type_info_ref;
        inline app::TitlePermissionsPolicyChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitlePermissionsPolicyChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitlePermissionsPolicyChangedEventData");
        }
        inline app::TitlePermissionsPolicyChangedEventData* create() {
            return il2cpp::create_object<app::TitlePermissionsPolicyChangedEventData>(get_class());
        }
    } // namespace TitlePermissionsPolicyChangedEventData
} // namespace app::classes::types
