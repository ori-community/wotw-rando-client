#pragma once
#include <Modloader/app/structs/XboxControllerInput_Axis__Enum.h>
#include <Modloader/app/structs/XboxControllerInput_Axis__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxControllerInput_Axis__Enum {
        inline app::XboxControllerInput_Axis__Enum__Class** type_info() {
            static app::XboxControllerInput_Axis__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxControllerInput_Axis__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxControllerInput_Axis__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxControllerInput_Axis__Enum__Class>(type_info(), "SmartInput", "XboxControllerInput", "Axis");
        }
        inline app::XboxControllerInput_Axis__Enum* create() {
            return il2cpp::create_object<app::XboxControllerInput_Axis__Enum>(get_class());
        }
    } // namespace XboxControllerInput_Axis__Enum
} // namespace app::classes::types
