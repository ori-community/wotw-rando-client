#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InputField_EditState__Enum__Class.h>
#include <Modloader/app/structs/InputField_EditState__Enum.h>

namespace app::classes::types {
    namespace InputField_EditState__Enum {
        namespace {
            inline app::InputField_EditState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::InputField_EditState__Enum__Class** type_info = &type_info_ref;
        inline app::InputField_EditState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InputField_EditState__Enum__Class>(type_info, "UnityEngine.UI", "InputField", "EditState");
        }
        inline app::InputField_EditState__Enum* create() {
            return il2cpp::create_object<app::InputField_EditState__Enum>(get_class());
        }
    } // namespace InputField_EditState__Enum
} // namespace app::classes::types
