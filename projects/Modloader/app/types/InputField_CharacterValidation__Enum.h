#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputField_CharacterValidation__Enum {
        namespace {
            inline app::InputField_CharacterValidation__Enum__Class* type_info_ref = nullptr;
        }
        inline app::InputField_CharacterValidation__Enum__Class** type_info = &type_info_ref;
        inline app::InputField_CharacterValidation__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InputField_CharacterValidation__Enum__Class>(type_info, "UnityEngine.UI", "InputField", "CharacterValidation");
        }
        inline app::InputField_CharacterValidation__Enum* create() {
            return il2cpp::create_object<app::InputField_CharacterValidation__Enum>(get_class());
        }
    } // namespace InputField_CharacterValidation__Enum
} // namespace app::classes::types
