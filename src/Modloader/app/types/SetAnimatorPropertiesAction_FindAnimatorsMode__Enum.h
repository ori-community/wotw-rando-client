#pragma once
#include <Modloader/app/structs/SetAnimatorPropertiesAction_FindAnimatorsMode__Enum.h>
#include <Modloader/app/structs/SetAnimatorPropertiesAction_FindAnimatorsMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetAnimatorPropertiesAction_FindAnimatorsMode__Enum {
        inline app::SetAnimatorPropertiesAction_FindAnimatorsMode__Enum__Class** type_info() {
            static app::SetAnimatorPropertiesAction_FindAnimatorsMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetAnimatorPropertiesAction_FindAnimatorsMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetAnimatorPropertiesAction_FindAnimatorsMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SetAnimatorPropertiesAction_FindAnimatorsMode__Enum__Class>(type_info(), "", "SetAnimatorPropertiesAction", "FindAnimatorsMode");
        }
        inline app::SetAnimatorPropertiesAction_FindAnimatorsMode__Enum* create() {
            return il2cpp::create_object<app::SetAnimatorPropertiesAction_FindAnimatorsMode__Enum>(get_class());
        }
    } // namespace SetAnimatorPropertiesAction_FindAnimatorsMode__Enum
} // namespace app::classes::types
