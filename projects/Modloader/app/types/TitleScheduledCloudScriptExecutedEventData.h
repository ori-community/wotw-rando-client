#pragma once
#include <Modloader/app/structs/TitleScheduledCloudScriptExecutedEventData.h>
#include <Modloader/app/structs/TitleScheduledCloudScriptExecutedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleScheduledCloudScriptExecutedEventData {
        inline app::TitleScheduledCloudScriptExecutedEventData__Class** type_info() {
            static app::TitleScheduledCloudScriptExecutedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleScheduledCloudScriptExecutedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleScheduledCloudScriptExecutedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleScheduledCloudScriptExecutedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleScheduledCloudScriptExecutedEventData");
        }
        inline app::TitleScheduledCloudScriptExecutedEventData* create() {
            return il2cpp::create_object<app::TitleScheduledCloudScriptExecutedEventData>(get_class());
        }
    } // namespace TitleScheduledCloudScriptExecutedEventData
} // namespace app::classes::types
