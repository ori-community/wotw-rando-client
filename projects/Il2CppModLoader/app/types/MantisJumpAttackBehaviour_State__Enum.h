#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MantisJumpAttackBehaviour_State__Enum {
        namespace {
            app::MantisJumpAttackBehaviour_State__Enum__Class* type_info_ref = nullptr;
        }
        app::MantisJumpAttackBehaviour_State__Enum__Class** type_info = &type_info_ref;
        inline app::MantisJumpAttackBehaviour_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisJumpAttackBehaviour_State__Enum__Class>(type_info, "", "MantisJumpAttackBehaviour", "State");
        }
        inline app::MantisJumpAttackBehaviour_State__Enum* create() {
            return il2cpp::create_object<app::MantisJumpAttackBehaviour_State__Enum>(get_class());
        }
    } // namespace MantisJumpAttackBehaviour_State__Enum
} // namespace app::classes::types
