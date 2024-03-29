#pragma once
#include <Modloader/app/structs/PlayerExecutedCloudScriptEventData.h>
#include <Modloader/app/structs/PlayerExecutedCloudScriptEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerExecutedCloudScriptEventData {
        inline app::PlayerExecutedCloudScriptEventData__Class** type_info() {
            static app::PlayerExecutedCloudScriptEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerExecutedCloudScriptEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerExecutedCloudScriptEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerExecutedCloudScriptEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerExecutedCloudScriptEventData");
        }
        inline app::PlayerExecutedCloudScriptEventData* create() {
            return il2cpp::create_object<app::PlayerExecutedCloudScriptEventData>(get_class());
        }
    } // namespace PlayerExecutedCloudScriptEventData
} // namespace app::classes::types
