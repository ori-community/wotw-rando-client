#pragma once
#include <Modloader/app/structs/PlayerTriggeredActionExecutedCloudScriptEventData.h>
#include <Modloader/app/structs/PlayerTriggeredActionExecutedCloudScriptEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerTriggeredActionExecutedCloudScriptEventData {
        inline app::PlayerTriggeredActionExecutedCloudScriptEventData__Class** type_info() {
            static app::PlayerTriggeredActionExecutedCloudScriptEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerTriggeredActionExecutedCloudScriptEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerTriggeredActionExecutedCloudScriptEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerTriggeredActionExecutedCloudScriptEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerTriggeredActionExecutedCloudScriptEventData");
        }
        inline app::PlayerTriggeredActionExecutedCloudScriptEventData* create() {
            return il2cpp::create_object<app::PlayerTriggeredActionExecutedCloudScriptEventData>(get_class());
        }
    } // namespace PlayerTriggeredActionExecutedCloudScriptEventData
} // namespace app::classes::types
