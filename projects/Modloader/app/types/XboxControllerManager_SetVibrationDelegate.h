#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XboxControllerManager_SetVibrationDelegate__Class.h>
#include <Modloader/app/structs/XboxControllerManager_SetVibrationDelegate.h>

namespace app::classes::types {
    namespace XboxControllerManager_SetVibrationDelegate {
        namespace {
            inline app::XboxControllerManager_SetVibrationDelegate__Class* type_info_ref = nullptr;
        }
        inline app::XboxControllerManager_SetVibrationDelegate__Class** type_info = &type_info_ref;
        inline app::XboxControllerManager_SetVibrationDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxControllerManager_SetVibrationDelegate__Class>(type_info, "Core.Devices", "XboxControllerManager", "SetVibrationDelegate");
        }
        inline app::XboxControllerManager_SetVibrationDelegate* create() {
            return il2cpp::create_object<app::XboxControllerManager_SetVibrationDelegate>(get_class());
        }
    } // namespace XboxControllerManager_SetVibrationDelegate
} // namespace app::classes::types
