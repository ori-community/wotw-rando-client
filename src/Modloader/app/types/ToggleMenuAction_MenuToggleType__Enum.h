#pragma once
#include <Modloader/app/structs/ToggleMenuAction_MenuToggleType__Enum.h>
#include <Modloader/app/structs/ToggleMenuAction_MenuToggleType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ToggleMenuAction_MenuToggleType__Enum {
        inline app::ToggleMenuAction_MenuToggleType__Enum__Class** type_info() {
            static app::ToggleMenuAction_MenuToggleType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ToggleMenuAction_MenuToggleType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ToggleMenuAction_MenuToggleType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ToggleMenuAction_MenuToggleType__Enum__Class>(type_info(), "", "ToggleMenuAction", "MenuToggleType");
        }
        inline app::ToggleMenuAction_MenuToggleType__Enum* create() {
            return il2cpp::create_object<app::ToggleMenuAction_MenuToggleType__Enum>(get_class());
        }
    } // namespace ToggleMenuAction_MenuToggleType__Enum
} // namespace app::classes::types
