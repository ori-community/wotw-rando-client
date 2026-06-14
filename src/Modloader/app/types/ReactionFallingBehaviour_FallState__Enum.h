#pragma once
#include <Modloader/app/structs/ReactionFallingBehaviour_FallState__Enum.h>
#include <Modloader/app/structs/ReactionFallingBehaviour_FallState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReactionFallingBehaviour_FallState__Enum {
        inline app::ReactionFallingBehaviour_FallState__Enum__Class** type_info() {
            static app::ReactionFallingBehaviour_FallState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReactionFallingBehaviour_FallState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReactionFallingBehaviour_FallState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ReactionFallingBehaviour_FallState__Enum__Class>(type_info(), "", "ReactionFallingBehaviour", "FallState");
        }
        inline app::ReactionFallingBehaviour_FallState__Enum* create() {
            return il2cpp::create_object<app::ReactionFallingBehaviour_FallState__Enum>(get_class());
        }
    } // namespace ReactionFallingBehaviour_FallState__Enum
} // namespace app::classes::types
