#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ToolboxItemFilterType__Enum {
        inline app::ToolboxItemFilterType__Enum__Class** type_info = (app::ToolboxItemFilterType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047483D0));
        inline app::ToolboxItemFilterType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ToolboxItemFilterType__Enum__Class>(type_info, "System.ComponentModel", "ToolboxItemFilterType");
        }
        inline app::ToolboxItemFilterType__Enum* create() {
            return il2cpp::create_object<app::ToolboxItemFilterType__Enum>(get_class());
        }
    } // namespace ToolboxItemFilterType__Enum
} // namespace app::classes::types
