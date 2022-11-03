#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ToggleMenuAction_MenuToggleType__Enum {
        namespace {
            inline app::ToggleMenuAction_MenuToggleType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ToggleMenuAction_MenuToggleType__Enum__Class** type_info = &type_info_ref;
        inline app::ToggleMenuAction_MenuToggleType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ToggleMenuAction_MenuToggleType__Enum__Class>(type_info, "", "ToggleMenuAction", "MenuToggleType");
        }
        inline app::ToggleMenuAction_MenuToggleType__Enum* create() {
            return il2cpp::create_object<app::ToggleMenuAction_MenuToggleType__Enum>(get_class());
        }
    } // namespace ToggleMenuAction_MenuToggleType__Enum
} // namespace app::classes::types
