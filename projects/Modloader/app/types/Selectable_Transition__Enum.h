#pragma once
#include <Modloader/app/structs/Selectable_Transition__Enum.h>
#include <Modloader/app/structs/Selectable_Transition__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Selectable_Transition__Enum {
        inline app::Selectable_Transition__Enum__Class** type_info() {
            static app::Selectable_Transition__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Selectable_Transition__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Selectable_Transition__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Selectable_Transition__Enum__Class>(type_info(), "UnityEngine.UI", "Selectable", "Transition");
        }
        inline app::Selectable_Transition__Enum* create() {
            return il2cpp::create_object<app::Selectable_Transition__Enum>(get_class());
        }
    } // namespace Selectable_Transition__Enum
} // namespace app::classes::types
