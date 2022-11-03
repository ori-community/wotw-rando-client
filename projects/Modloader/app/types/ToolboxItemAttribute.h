#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ToolboxItemAttribute {
        inline app::ToolboxItemAttribute__Class** type_info = (app::ToolboxItemAttribute__Class**)(modloader::win::memory::resolve_rva(0x04763480));
        inline app::ToolboxItemAttribute__Class* get_class() {
            return il2cpp::get_class<app::ToolboxItemAttribute__Class>(type_info, "System.ComponentModel", "ToolboxItemAttribute");
        }
        inline app::ToolboxItemAttribute* create() {
            return il2cpp::create_object<app::ToolboxItemAttribute>(get_class());
        }
    } // namespace ToolboxItemAttribute
} // namespace app::classes::types
