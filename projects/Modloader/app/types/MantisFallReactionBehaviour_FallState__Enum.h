#pragma once
#include <Modloader/app/structs/MantisFallReactionBehaviour_FallState__Enum.h>
#include <Modloader/app/structs/MantisFallReactionBehaviour_FallState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisFallReactionBehaviour_FallState__Enum {
        inline app::MantisFallReactionBehaviour_FallState__Enum__Class** type_info() {
            static app::MantisFallReactionBehaviour_FallState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MantisFallReactionBehaviour_FallState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MantisFallReactionBehaviour_FallState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisFallReactionBehaviour_FallState__Enum__Class>(type_info(), "", "MantisFallReactionBehaviour", "FallState");
        }
        inline app::MantisFallReactionBehaviour_FallState__Enum* create() {
            return il2cpp::create_object<app::MantisFallReactionBehaviour_FallState__Enum>(get_class());
        }
    } // namespace MantisFallReactionBehaviour_FallState__Enum
} // namespace app::classes::types
