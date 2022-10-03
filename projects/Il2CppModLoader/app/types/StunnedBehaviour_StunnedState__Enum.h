#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StunnedBehaviour_StunnedState__Enum {
        namespace {
            app::StunnedBehaviour_StunnedState__Enum__Class* type_info_ref = nullptr;
        }
        app::StunnedBehaviour_StunnedState__Enum__Class** type_info = &type_info_ref;
        inline app::StunnedBehaviour_StunnedState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StunnedBehaviour_StunnedState__Enum__Class>(type_info, "", "StunnedBehaviour", "StunnedState");
        }
        inline app::StunnedBehaviour_StunnedState__Enum* create() {
            return il2cpp::create_object<app::StunnedBehaviour_StunnedState__Enum>(get_class());
        }
    } // namespace StunnedBehaviour_StunnedState__Enum
} // namespace app::classes::types
