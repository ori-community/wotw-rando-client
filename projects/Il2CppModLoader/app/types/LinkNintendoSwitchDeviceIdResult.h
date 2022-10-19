#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkNintendoSwitchDeviceIdResult {
        inline app::LinkNintendoSwitchDeviceIdResult__Class** type_info = (app::LinkNintendoSwitchDeviceIdResult__Class**)(modloader::win::memory::resolve_rva(0x04758400));
        inline app::LinkNintendoSwitchDeviceIdResult__Class* get_class() {
            return il2cpp::get_class<app::LinkNintendoSwitchDeviceIdResult__Class>(type_info, "PlayFab.ClientModels", "LinkNintendoSwitchDeviceIdResult");
        }
        inline app::LinkNintendoSwitchDeviceIdResult* create() {
            return il2cpp::create_object<app::LinkNintendoSwitchDeviceIdResult>(get_class());
        }
    } // namespace LinkNintendoSwitchDeviceIdResult
} // namespace app::classes::types
