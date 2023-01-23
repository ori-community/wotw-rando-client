#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoginWithNintendoSwitchDeviceIdRequest__Class.h>
#include <Modloader/app/structs/LoginWithNintendoSwitchDeviceIdRequest.h>

namespace app::classes::types {
    namespace LoginWithNintendoSwitchDeviceIdRequest {
        inline app::LoginWithNintendoSwitchDeviceIdRequest__Class** type_info = (app::LoginWithNintendoSwitchDeviceIdRequest__Class**)(modloader::win::memory::resolve_rva(0x047609F8));
        inline app::LoginWithNintendoSwitchDeviceIdRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithNintendoSwitchDeviceIdRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithNintendoSwitchDeviceIdRequest");
        }
        inline app::LoginWithNintendoSwitchDeviceIdRequest* create() {
            return il2cpp::create_object<app::LoginWithNintendoSwitchDeviceIdRequest>(get_class());
        }
    } // namespace LoginWithNintendoSwitchDeviceIdRequest
} // namespace app::classes::types
