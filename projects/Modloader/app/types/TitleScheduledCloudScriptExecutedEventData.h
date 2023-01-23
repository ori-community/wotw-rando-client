#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TitleScheduledCloudScriptExecutedEventData__Class.h>
#include <Modloader/app/structs/TitleScheduledCloudScriptExecutedEventData.h>

namespace app::classes::types {
    namespace TitleScheduledCloudScriptExecutedEventData {
        namespace {
            inline app::TitleScheduledCloudScriptExecutedEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleScheduledCloudScriptExecutedEventData__Class** type_info = &type_info_ref;
        inline app::TitleScheduledCloudScriptExecutedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleScheduledCloudScriptExecutedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleScheduledCloudScriptExecutedEventData");
        }
        inline app::TitleScheduledCloudScriptExecutedEventData* create() {
            return il2cpp::create_object<app::TitleScheduledCloudScriptExecutedEventData>(get_class());
        }
    } // namespace TitleScheduledCloudScriptExecutedEventData
} // namespace app::classes::types
