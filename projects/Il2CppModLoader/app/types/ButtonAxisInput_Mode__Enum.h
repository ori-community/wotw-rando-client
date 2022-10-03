#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ButtonAxisInput_Mode__Enum {
        namespace {
            app::ButtonAxisInput_Mode__Enum__Class* type_info_ref = nullptr;
        }
        app::ButtonAxisInput_Mode__Enum__Class** type_info = &type_info_ref;
        inline app::ButtonAxisInput_Mode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ButtonAxisInput_Mode__Enum__Class>(type_info, "SmartInput", "ButtonAxisInput", "Mode");
        }
        inline app::ButtonAxisInput_Mode__Enum* create() {
            return il2cpp::create_object<app::ButtonAxisInput_Mode__Enum>(get_class());
        }
    } // namespace ButtonAxisInput_Mode__Enum
} // namespace app::classes::types
