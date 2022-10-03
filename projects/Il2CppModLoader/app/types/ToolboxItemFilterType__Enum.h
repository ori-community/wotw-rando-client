#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ToolboxItemFilterType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ToolboxItemFilterType__Enum__Class** type_info;
        inline app::ToolboxItemFilterType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ToolboxItemFilterType__Enum__Class>(type_info, "System.ComponentModel", "ToolboxItemFilterType");
        }
        inline app::ToolboxItemFilterType__Enum* create() {
            return il2cpp::create_object<app::ToolboxItemFilterType__Enum>(get_class());
        }
    } // namespace ToolboxItemFilterType__Enum
} // namespace app::classes::types
