#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerDeviceInfoEventData__Class.h>
#include <Modloader/app/structs/PlayerDeviceInfoEventData.h>

namespace app::classes::types {
    namespace PlayerDeviceInfoEventData {
        namespace {
            inline app::PlayerDeviceInfoEventData__Class* type_info_ref = nullptr;
        }
        inline app::PlayerDeviceInfoEventData__Class** type_info = &type_info_ref;
        inline app::PlayerDeviceInfoEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerDeviceInfoEventData__Class>(type_info, "PlayFab.PlayStreamModels", "PlayerDeviceInfoEventData");
        }
        inline app::PlayerDeviceInfoEventData* create() {
            return il2cpp::create_object<app::PlayerDeviceInfoEventData>(get_class());
        }
    } // namespace PlayerDeviceInfoEventData
} // namespace app::classes::types
