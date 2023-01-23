#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerTriggeredActionExecutedCloudScriptEventData__Class.h>
#include <Modloader/app/structs/PlayerTriggeredActionExecutedCloudScriptEventData.h>

namespace app::classes::types {
    namespace PlayerTriggeredActionExecutedCloudScriptEventData {
        namespace {
            inline app::PlayerTriggeredActionExecutedCloudScriptEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerTriggeredActionExecutedCloudScriptEventData__Class** type_info = &type_info_ref;
        inline app::PlayerTriggeredActionExecutedCloudScriptEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerTriggeredActionExecutedCloudScriptEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerTriggeredActionExecutedCloudScriptEventData");
        }
        inline app::PlayerTriggeredActionExecutedCloudScriptEventData* create() {
            return il2cpp::create_object<app::PlayerTriggeredActionExecutedCloudScriptEventData>(get_class());
        }
    } // namespace PlayerTriggeredActionExecutedCloudScriptEventData
} // namespace app::classes::types
