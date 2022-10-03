#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserNintendoSwitchDeviceIdInfo_1 {
        namespace {
            app::UserNintendoSwitchDeviceIdInfo_1__Class* type_info_ref = nullptr;
        }
        app::UserNintendoSwitchDeviceIdInfo_1__Class** type_info = &type_info_ref;
        inline app::UserNintendoSwitchDeviceIdInfo_1__Class* get_class() {
            return il2cpp::get_class<app::UserNintendoSwitchDeviceIdInfo_1__Class>(type_info, "PlayFab.ServerModels", "UserNintendoSwitchDeviceIdInfo");
        }
        inline app::UserNintendoSwitchDeviceIdInfo_1* create() {
            return il2cpp::create_object<app::UserNintendoSwitchDeviceIdInfo_1>(get_class());
        }
    } // namespace UserNintendoSwitchDeviceIdInfo_1
} // namespace app::classes::types
