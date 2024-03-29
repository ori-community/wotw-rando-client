#pragma once
#include <Modloader/app/structs/LinkNintendoSwitchDeviceIdRequest.h>
#include <Modloader/app/structs/LinkNintendoSwitchDeviceIdRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkNintendoSwitchDeviceIdRequest {
        inline app::LinkNintendoSwitchDeviceIdRequest__Class** type_info() {
            static app::LinkNintendoSwitchDeviceIdRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkNintendoSwitchDeviceIdRequest__Class**)(modloader::win::memory::resolve_rva(0x04798B40));
            }
            return cache;
        }
        inline app::LinkNintendoSwitchDeviceIdRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkNintendoSwitchDeviceIdRequest__Class>(type_info(), "PlayFab.ClientModels", "LinkNintendoSwitchDeviceIdRequest");
        }
        inline app::LinkNintendoSwitchDeviceIdRequest* create() {
            return il2cpp::create_object<app::LinkNintendoSwitchDeviceIdRequest>(get_class());
        }
    } // namespace LinkNintendoSwitchDeviceIdRequest
} // namespace app::classes::types
