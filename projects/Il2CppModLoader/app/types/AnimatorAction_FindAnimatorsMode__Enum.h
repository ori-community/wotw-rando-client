#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorAction_FindAnimatorsMode__Enum {
        namespace {
            app::AnimatorAction_FindAnimatorsMode__Enum__Class* type_info_ref = nullptr;
        }
        app::AnimatorAction_FindAnimatorsMode__Enum__Class** type_info = &type_info_ref;
        inline app::AnimatorAction_FindAnimatorsMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimatorAction_FindAnimatorsMode__Enum__Class>(type_info, "", "AnimatorAction", "FindAnimatorsMode");
        }
        inline app::AnimatorAction_FindAnimatorsMode__Enum* create() {
            return il2cpp::create_object<app::AnimatorAction_FindAnimatorsMode__Enum>(get_class());
        }
    } // namespace AnimatorAction_FindAnimatorsMode__Enum
} // namespace app::classes::types
