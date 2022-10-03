#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleScheduledCloudScriptExecutedEventData {
        namespace {
            app::TitleScheduledCloudScriptExecutedEventData__Class* type_info_ref = nullptr;
        }
        app::TitleScheduledCloudScriptExecutedEventData__Class** type_info = &type_info_ref;
        inline app::TitleScheduledCloudScriptExecutedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleScheduledCloudScriptExecutedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleScheduledCloudScriptExecutedEventData");
        }
        inline app::TitleScheduledCloudScriptExecutedEventData* create() {
            return il2cpp::create_object<app::TitleScheduledCloudScriptExecutedEventData>(get_class());
        }
    } // namespace TitleScheduledCloudScriptExecutedEventData
} // namespace app::classes::types
