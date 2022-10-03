#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardJumpOverBehaviour_State__Enum {
        namespace {
            app::LizardJumpOverBehaviour_State__Enum__Class* type_info_ref = nullptr;
        }
        app::LizardJumpOverBehaviour_State__Enum__Class** type_info = &type_info_ref;
        inline app::LizardJumpOverBehaviour_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardJumpOverBehaviour_State__Enum__Class>(type_info, "Moon", "LizardJumpOverBehaviour", "State");
        }
        inline app::LizardJumpOverBehaviour_State__Enum* create() {
            return il2cpp::create_object<app::LizardJumpOverBehaviour_State__Enum>(get_class());
        }
    } // namespace LizardJumpOverBehaviour_State__Enum
} // namespace app::classes::types
