#pragma once
#include <Modloader/app/structs/XboxControllerInput_Button__Enum__Array.h>
#include <Modloader/app/structs/XboxControllerInput_Button__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxControllerInput_Button__Enum__Array {
        inline app::XboxControllerInput_Button__Enum__Array__Class** type_info() {
            static app::XboxControllerInput_Button__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxControllerInput_Button__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04726DD0));
            }
            return cache;
        }
        inline app::XboxControllerInput_Button__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::XboxControllerInput_Button__Enum__Array__Class>(type_info(), "SmartInput", "XboxControllerInput+Button[]");
        }
        inline app::XboxControllerInput_Button__Enum__Array* create() {
            return il2cpp::create_object<app::XboxControllerInput_Button__Enum__Array>(get_class());
        }
    } // namespace XboxControllerInput_Button__Enum__Array
} // namespace app::classes::types
