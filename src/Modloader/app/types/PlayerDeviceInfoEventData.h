#pragma once
#include <Modloader/app/structs/PlayerDeviceInfoEventData.h>
#include <Modloader/app/structs/PlayerDeviceInfoEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerDeviceInfoEventData {
        inline app::PlayerDeviceInfoEventData__Class** type_info() {
            static app::PlayerDeviceInfoEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerDeviceInfoEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerDeviceInfoEventData__Class* get_class() {
            return il2cpp::get_class<app::PlayerDeviceInfoEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "PlayerDeviceInfoEventData");
        }
        inline app::PlayerDeviceInfoEventData* create() {
            return il2cpp::create_object<app::PlayerDeviceInfoEventData>(get_class());
        }
    } // namespace PlayerDeviceInfoEventData
} // namespace app::classes::types
