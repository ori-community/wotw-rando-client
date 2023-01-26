#pragma once
#include <Modloader/app/structs/Toggle_ToggleTransition__Enum.h>
#include <Modloader/app/structs/Toggle_ToggleTransition__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Toggle_ToggleTransition__Enum {
        inline app::Toggle_ToggleTransition__Enum__Class** type_info() {
            static app::Toggle_ToggleTransition__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Toggle_ToggleTransition__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Toggle_ToggleTransition__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Toggle_ToggleTransition__Enum__Class>(type_info(), "UnityEngine.UI", "Toggle", "ToggleTransition");
        }
        inline app::Toggle_ToggleTransition__Enum* create() {
            return il2cpp::create_object<app::Toggle_ToggleTransition__Enum>(get_class());
        }
    } // namespace Toggle_ToggleTransition__Enum
} // namespace app::classes::types
