#pragma once
#include <Modloader/app/structs/Selectable_SelectionState__Enum.h>
#include <Modloader/app/structs/Selectable_SelectionState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Selectable_SelectionState__Enum {
        inline app::Selectable_SelectionState__Enum__Class** type_info() {
            static app::Selectable_SelectionState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Selectable_SelectionState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Selectable_SelectionState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Selectable_SelectionState__Enum__Class>(type_info(), "UnityEngine.UI", "Selectable", "SelectionState");
        }
        inline app::Selectable_SelectionState__Enum* create() {
            return il2cpp::create_object<app::Selectable_SelectionState__Enum>(get_class());
        }
    } // namespace Selectable_SelectionState__Enum
} // namespace app::classes::types
