#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkNintendoSwitchDeviceIdRequest {
        inline app::UnlinkNintendoSwitchDeviceIdRequest__Class** type_info = (app::UnlinkNintendoSwitchDeviceIdRequest__Class**)(modloader::win::memory::resolve_rva(0x04754C50));
        inline app::UnlinkNintendoSwitchDeviceIdRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkNintendoSwitchDeviceIdRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkNintendoSwitchDeviceIdRequest");
        }
        inline app::UnlinkNintendoSwitchDeviceIdRequest* create() {
            return il2cpp::create_object<app::UnlinkNintendoSwitchDeviceIdRequest>(get_class());
        }
    } // namespace UnlinkNintendoSwitchDeviceIdRequest
} // namespace app::classes::types
