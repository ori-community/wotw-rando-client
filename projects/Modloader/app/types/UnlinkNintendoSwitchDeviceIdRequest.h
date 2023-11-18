#pragma once
#include <Modloader/app/structs/UnlinkNintendoSwitchDeviceIdRequest.h>
#include <Modloader/app/structs/UnlinkNintendoSwitchDeviceIdRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkNintendoSwitchDeviceIdRequest {
        inline app::UnlinkNintendoSwitchDeviceIdRequest__Class** type_info() {
            static app::UnlinkNintendoSwitchDeviceIdRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkNintendoSwitchDeviceIdRequest__Class**)(modloader::win::memory::resolve_rva(0x04754C50));
            }
            return cache;
        }
        inline app::UnlinkNintendoSwitchDeviceIdRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkNintendoSwitchDeviceIdRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlinkNintendoSwitchDeviceIdRequest");
        }
        inline app::UnlinkNintendoSwitchDeviceIdRequest* create() {
            return il2cpp::create_object<app::UnlinkNintendoSwitchDeviceIdRequest>(get_class());
        }
    } // namespace UnlinkNintendoSwitchDeviceIdRequest
} // namespace app::classes::types
