#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReactionFallingBehaviour_FallState__Enum {
        namespace {
            app::ReactionFallingBehaviour_FallState__Enum__Class* type_info_ref = nullptr;
        }
        app::ReactionFallingBehaviour_FallState__Enum__Class** type_info = &type_info_ref;
        inline app::ReactionFallingBehaviour_FallState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ReactionFallingBehaviour_FallState__Enum__Class>(type_info, "", "ReactionFallingBehaviour", "FallState");
        }
        inline app::ReactionFallingBehaviour_FallState__Enum* create() {
            return il2cpp::create_object<app::ReactionFallingBehaviour_FallState__Enum>(get_class());
        }
    } // namespace ReactionFallingBehaviour_FallState__Enum
} // namespace app::classes::types
