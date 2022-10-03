#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Toggle_ToggleTransition__Enum {
        namespace {
            app::Toggle_ToggleTransition__Enum__Class* type_info_ref = nullptr;
        }
        app::Toggle_ToggleTransition__Enum__Class** type_info = &type_info_ref;
        inline app::Toggle_ToggleTransition__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Toggle_ToggleTransition__Enum__Class>(type_info, "UnityEngine.UI", "Toggle", "ToggleTransition");
        }
        inline app::Toggle_ToggleTransition__Enum* create() {
            return il2cpp::create_object<app::Toggle_ToggleTransition__Enum>(get_class());
        }
    } // namespace Toggle_ToggleTransition__Enum
} // namespace app::classes::types
