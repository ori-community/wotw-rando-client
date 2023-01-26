#pragma once
#include <Modloader/app/structs/ActiveCharacterCondition_Character__Enum.h>
#include <Modloader/app/structs/ActiveCharacterCondition_Character__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActiveCharacterCondition_Character__Enum {
        inline app::ActiveCharacterCondition_Character__Enum__Class** type_info() {
            static app::ActiveCharacterCondition_Character__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActiveCharacterCondition_Character__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActiveCharacterCondition_Character__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ActiveCharacterCondition_Character__Enum__Class>(type_info(), "", "ActiveCharacterCondition", "Character");
        }
        inline app::ActiveCharacterCondition_Character__Enum* create() {
            return il2cpp::create_object<app::ActiveCharacterCondition_Character__Enum>(get_class());
        }
    } // namespace ActiveCharacterCondition_Character__Enum
} // namespace app::classes::types
