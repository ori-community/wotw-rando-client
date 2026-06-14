#pragma once
#include <Modloader/app/structs/GridLayoutGroup_Constraint__Enum.h>
#include <Modloader/app/structs/GridLayoutGroup_Constraint__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GridLayoutGroup_Constraint__Enum {
        inline app::GridLayoutGroup_Constraint__Enum__Class** type_info() {
            static app::GridLayoutGroup_Constraint__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GridLayoutGroup_Constraint__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GridLayoutGroup_Constraint__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GridLayoutGroup_Constraint__Enum__Class>(type_info(), "UnityEngine.UI", "GridLayoutGroup", "Constraint");
        }
        inline app::GridLayoutGroup_Constraint__Enum* create() {
            return il2cpp::create_object<app::GridLayoutGroup_Constraint__Enum>(get_class());
        }
    } // namespace GridLayoutGroup_Constraint__Enum
} // namespace app::classes::types
