#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputField_LineType__Enum {
        namespace {
            inline app::InputField_LineType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::InputField_LineType__Enum__Class** type_info = &type_info_ref;
        inline app::InputField_LineType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InputField_LineType__Enum__Class>(type_info, "UnityEngine.UI", "InputField", "LineType");
        }
        inline app::InputField_LineType__Enum* create() {
            return il2cpp::create_object<app::InputField_LineType__Enum>(get_class());
        }
    } // namespace InputField_LineType__Enum
} // namespace app::classes::types
