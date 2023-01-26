#pragma once
#include <Modloader/app/structs/UserNintendoSwitchDeviceIdInfo.h>
#include <Modloader/app/structs/UserNintendoSwitchDeviceIdInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserNintendoSwitchDeviceIdInfo {
        inline app::UserNintendoSwitchDeviceIdInfo__Class** type_info() {
            static app::UserNintendoSwitchDeviceIdInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserNintendoSwitchDeviceIdInfo__Class**)(modloader::win::memory::resolve_rva(0x0473C048));
            }
            return cache;
        }
        inline app::UserNintendoSwitchDeviceIdInfo__Class* get_class() {
            return il2cpp::get_class<app::UserNintendoSwitchDeviceIdInfo__Class>(type_info(), "PlayFab.ClientModels", "UserNintendoSwitchDeviceIdInfo");
        }
        inline app::UserNintendoSwitchDeviceIdInfo* create() {
            return il2cpp::create_object<app::UserNintendoSwitchDeviceIdInfo>(get_class());
        }
    } // namespace UserNintendoSwitchDeviceIdInfo
} // namespace app::classes::types
