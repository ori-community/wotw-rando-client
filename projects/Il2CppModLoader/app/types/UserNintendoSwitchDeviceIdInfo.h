#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserNintendoSwitchDeviceIdInfo {
        inline app::UserNintendoSwitchDeviceIdInfo__Class** type_info = (app::UserNintendoSwitchDeviceIdInfo__Class**)(modloader::win::memory::resolve_rva(0x0473C048));
        inline app::UserNintendoSwitchDeviceIdInfo__Class* get_class() {
            return il2cpp::get_class<app::UserNintendoSwitchDeviceIdInfo__Class>(type_info, "PlayFab.ClientModels", "UserNintendoSwitchDeviceIdInfo");
        }
        inline app::UserNintendoSwitchDeviceIdInfo* create() {
            return il2cpp::create_object<app::UserNintendoSwitchDeviceIdInfo>(get_class());
        }
    } // namespace UserNintendoSwitchDeviceIdInfo
} // namespace app::classes::types
