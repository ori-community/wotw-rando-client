#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxControllerInput_Axis__Enum {
        namespace {
            inline app::XboxControllerInput_Axis__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XboxControllerInput_Axis__Enum__Class** type_info = &type_info_ref;
        inline app::XboxControllerInput_Axis__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxControllerInput_Axis__Enum__Class>(type_info, "SmartInput", "XboxControllerInput", "Axis");
        }
        inline app::XboxControllerInput_Axis__Enum* create() {
            return il2cpp::create_object<app::XboxControllerInput_Axis__Enum>(get_class());
        }
    } // namespace XboxControllerInput_Axis__Enum
} // namespace app::classes::types
