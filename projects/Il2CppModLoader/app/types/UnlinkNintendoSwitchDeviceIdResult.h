#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkNintendoSwitchDeviceIdResult {
        inline app::UnlinkNintendoSwitchDeviceIdResult__Class** type_info = (app::UnlinkNintendoSwitchDeviceIdResult__Class**)(modloader::win::memory::resolve_rva(0x0470B5E8));
        inline app::UnlinkNintendoSwitchDeviceIdResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkNintendoSwitchDeviceIdResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkNintendoSwitchDeviceIdResult");
        }
        inline app::UnlinkNintendoSwitchDeviceIdResult* create() {
            return il2cpp::create_object<app::UnlinkNintendoSwitchDeviceIdResult>(get_class());
        }
    } // namespace UnlinkNintendoSwitchDeviceIdResult
} // namespace app::classes::types
