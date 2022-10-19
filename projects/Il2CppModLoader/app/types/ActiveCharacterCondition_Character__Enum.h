#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActiveCharacterCondition_Character__Enum {
        namespace {
            inline app::ActiveCharacterCondition_Character__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ActiveCharacterCondition_Character__Enum__Class** type_info = &type_info_ref;
        inline app::ActiveCharacterCondition_Character__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ActiveCharacterCondition_Character__Enum__Class>(type_info, "", "ActiveCharacterCondition", "Character");
        }
        inline app::ActiveCharacterCondition_Character__Enum* create() {
            return il2cpp::create_object<app::ActiveCharacterCondition_Character__Enum>(get_class());
        }
    } // namespace ActiveCharacterCondition_Character__Enum
} // namespace app::classes::types
