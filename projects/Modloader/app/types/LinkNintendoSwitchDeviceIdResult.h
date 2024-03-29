#pragma once
#include <Modloader/app/structs/LinkNintendoSwitchDeviceIdResult.h>
#include <Modloader/app/structs/LinkNintendoSwitchDeviceIdResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkNintendoSwitchDeviceIdResult {
        inline app::LinkNintendoSwitchDeviceIdResult__Class** type_info() {
            static app::LinkNintendoSwitchDeviceIdResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkNintendoSwitchDeviceIdResult__Class**)(modloader::win::memory::resolve_rva(0x04758400));
            }
            return cache;
        }
        inline app::LinkNintendoSwitchDeviceIdResult__Class* get_class() {
            return il2cpp::get_class<app::LinkNintendoSwitchDeviceIdResult__Class>(type_info(), "PlayFab.ClientModels", "LinkNintendoSwitchDeviceIdResult");
        }
        inline app::LinkNintendoSwitchDeviceIdResult* create() {
            return il2cpp::create_object<app::LinkNintendoSwitchDeviceIdResult>(get_class());
        }
    } // namespace LinkNintendoSwitchDeviceIdResult
} // namespace app::classes::types
