#pragma once
#include <Modloader/app/structs/UserNintendoSwitchDeviceIdInfo_1.h>
#include <Modloader/app/structs/UserNintendoSwitchDeviceIdInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserNintendoSwitchDeviceIdInfo_1 {
        inline app::UserNintendoSwitchDeviceIdInfo_1__Class** type_info() {
            static app::UserNintendoSwitchDeviceIdInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserNintendoSwitchDeviceIdInfo_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserNintendoSwitchDeviceIdInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserNintendoSwitchDeviceIdInfo_1__Class>(type_info(), "PlayFab.ServerModels", "UserNintendoSwitchDeviceIdInfo");
        }
        inline app::UserNintendoSwitchDeviceIdInfo_1* create() {
            return il2cpp::create_object<app::UserNintendoSwitchDeviceIdInfo_1>(get_class());
        }
    } // namespace UserNintendoSwitchDeviceIdInfo_1
} // namespace app::classes::types
