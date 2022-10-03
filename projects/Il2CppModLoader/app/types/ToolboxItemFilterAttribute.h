#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ToolboxItemFilterAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ToolboxItemFilterAttribute__Class** type_info;
        inline app::ToolboxItemFilterAttribute__Class* get_class() {
            return il2cpp::get_class<app::ToolboxItemFilterAttribute__Class>(type_info, "System.ComponentModel", "ToolboxItemFilterAttribute");
        }
        inline app::ToolboxItemFilterAttribute* create() {
            return il2cpp::create_object<app::ToolboxItemFilterAttribute>(get_class());
        }
    } // namespace ToolboxItemFilterAttribute
} // namespace app::classes::types
