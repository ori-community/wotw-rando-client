#pragma once
#include <Modloader/app/structs/UnlinkNintendoSwitchDeviceIdResult.h>
#include <Modloader/app/structs/UnlinkNintendoSwitchDeviceIdResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkNintendoSwitchDeviceIdResult {
        inline app::UnlinkNintendoSwitchDeviceIdResult__Class** type_info() {
            static app::UnlinkNintendoSwitchDeviceIdResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkNintendoSwitchDeviceIdResult__Class**)(modloader::win::memory::resolve_rva(0x0470B5E8));
            }
            return cache;
        }
        inline app::UnlinkNintendoSwitchDeviceIdResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkNintendoSwitchDeviceIdResult__Class>(type_info(), "PlayFab.ClientModels", "UnlinkNintendoSwitchDeviceIdResult");
        }
        inline app::UnlinkNintendoSwitchDeviceIdResult* create() {
            return il2cpp::create_object<app::UnlinkNintendoSwitchDeviceIdResult>(get_class());
        }
    } // namespace UnlinkNintendoSwitchDeviceIdResult
} // namespace app::classes::types
