#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VibrationFramework_HidVibrationSlot__Enum {
        namespace {
            inline app::VibrationFramework_HidVibrationSlot__Enum__Class* type_info_ref = nullptr;
        }
        inline app::VibrationFramework_HidVibrationSlot__Enum__Class** type_info = &type_info_ref;
        inline app::VibrationFramework_HidVibrationSlot__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::VibrationFramework_HidVibrationSlot__Enum__Class>(type_info, "nintendoSDKPlugin", "VibrationFramework", "HidVibrationSlot");
        }
        inline app::VibrationFramework_HidVibrationSlot__Enum* create() {
            return il2cpp::create_object<app::VibrationFramework_HidVibrationSlot__Enum>(get_class());
        }
    } // namespace VibrationFramework_HidVibrationSlot__Enum
} // namespace app::classes::types
