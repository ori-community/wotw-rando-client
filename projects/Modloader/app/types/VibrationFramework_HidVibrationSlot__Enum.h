#pragma once
#include <Modloader/app/structs/VibrationFramework_HidVibrationSlot__Enum.h>
#include <Modloader/app/structs/VibrationFramework_HidVibrationSlot__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VibrationFramework_HidVibrationSlot__Enum {
        inline app::VibrationFramework_HidVibrationSlot__Enum__Class** type_info() {
            static app::VibrationFramework_HidVibrationSlot__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VibrationFramework_HidVibrationSlot__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VibrationFramework_HidVibrationSlot__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::VibrationFramework_HidVibrationSlot__Enum__Class>(type_info(), "nintendoSDKPlugin", "VibrationFramework", "HidVibrationSlot");
        }
        inline app::VibrationFramework_HidVibrationSlot__Enum* create() {
            return il2cpp::create_object<app::VibrationFramework_HidVibrationSlot__Enum>(get_class());
        }
    } // namespace VibrationFramework_HidVibrationSlot__Enum
} // namespace app::classes::types
