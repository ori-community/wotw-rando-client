#pragma once
#include <Modloader/app/structs/GUILayoutOption_Type__Enum.h>
#include <Modloader/app/structs/GUILayoutOption_Type__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUILayoutOption_Type__Enum {
        inline app::GUILayoutOption_Type__Enum__Class** type_info() {
            static app::GUILayoutOption_Type__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GUILayoutOption_Type__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GUILayoutOption_Type__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GUILayoutOption_Type__Enum__Class>(type_info(), "UnityEngine", "GUILayoutOption", "Type");
        }
        inline app::GUILayoutOption_Type__Enum* create() {
            return il2cpp::create_object<app::GUILayoutOption_Type__Enum>(get_class());
        }
    } // namespace GUILayoutOption_Type__Enum
} // namespace app::classes::types
