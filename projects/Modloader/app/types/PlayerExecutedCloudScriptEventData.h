#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerExecutedCloudScriptEventData {
        namespace {
            inline app::PlayerExecutedCloudScriptEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerExecutedCloudScriptEventData__Class** type_info = &type_info_ref;
        inline app::PlayerExecutedCloudScriptEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerExecutedCloudScriptEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerExecutedCloudScriptEventData");
        }
        inline app::PlayerExecutedCloudScriptEventData* create() {
            return il2cpp::create_object<app::PlayerExecutedCloudScriptEventData>(get_class());
        }
    } // namespace PlayerExecutedCloudScriptEventData
} // namespace app::classes::types
