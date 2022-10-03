#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ToolboxItemAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ToolboxItemAttribute__Class** type_info;
        inline app::ToolboxItemAttribute__Class* get_class() {
            return il2cpp::get_class<app::ToolboxItemAttribute__Class>(type_info, "System.ComponentModel", "ToolboxItemAttribute");
        }
        inline app::ToolboxItemAttribute* create() {
            return il2cpp::create_object<app::ToolboxItemAttribute>(get_class());
        }
    } // namespace ToolboxItemAttribute
} // namespace app::classes::types
