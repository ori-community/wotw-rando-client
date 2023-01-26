#pragma once
#include <Modloader/app/structs/StunnedBehaviour_StunnedState__Enum.h>
#include <Modloader/app/structs/StunnedBehaviour_StunnedState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StunnedBehaviour_StunnedState__Enum {
        inline app::StunnedBehaviour_StunnedState__Enum__Class** type_info() {
            static app::StunnedBehaviour_StunnedState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StunnedBehaviour_StunnedState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StunnedBehaviour_StunnedState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StunnedBehaviour_StunnedState__Enum__Class>(type_info(), "", "StunnedBehaviour", "StunnedState");
        }
        inline app::StunnedBehaviour_StunnedState__Enum* create() {
            return il2cpp::create_object<app::StunnedBehaviour_StunnedState__Enum>(get_class());
        }
    } // namespace StunnedBehaviour_StunnedState__Enum
} // namespace app::classes::types
