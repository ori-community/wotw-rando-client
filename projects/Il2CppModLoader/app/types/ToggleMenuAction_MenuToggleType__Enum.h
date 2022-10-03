#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ToggleMenuAction_MenuToggleType__Enum {
        namespace {
            app::ToggleMenuAction_MenuToggleType__Enum__Class* type_info_ref = nullptr;
        }
        app::ToggleMenuAction_MenuToggleType__Enum__Class** type_info = &type_info_ref;
        inline app::ToggleMenuAction_MenuToggleType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ToggleMenuAction_MenuToggleType__Enum__Class>(type_info, "", "ToggleMenuAction", "MenuToggleType");
        }
        inline app::ToggleMenuAction_MenuToggleType__Enum* create() {
            return il2cpp::create_object<app::ToggleMenuAction_MenuToggleType__Enum>(get_class());
        }
    } // namespace ToggleMenuAction_MenuToggleType__Enum
} // namespace app::classes::types
