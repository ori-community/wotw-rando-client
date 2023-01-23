#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetAnimatorPropertiesAction_FindAnimatorsMode__Enum__Class.h>
#include <Modloader/app/structs/SetAnimatorPropertiesAction_FindAnimatorsMode__Enum.h>

namespace app::classes::types {
    namespace SetAnimatorPropertiesAction_FindAnimatorsMode__Enum {
        namespace {
            inline app::SetAnimatorPropertiesAction_FindAnimatorsMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SetAnimatorPropertiesAction_FindAnimatorsMode__Enum__Class** type_info = &type_info_ref;
        inline app::SetAnimatorPropertiesAction_FindAnimatorsMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SetAnimatorPropertiesAction_FindAnimatorsMode__Enum__Class>(type_info, "", "SetAnimatorPropertiesAction", "FindAnimatorsMode");
        }
        inline app::SetAnimatorPropertiesAction_FindAnimatorsMode__Enum* create() {
            return il2cpp::create_object<app::SetAnimatorPropertiesAction_FindAnimatorsMode__Enum>(get_class());
        }
    } // namespace SetAnimatorPropertiesAction_FindAnimatorsMode__Enum
} // namespace app::classes::types
