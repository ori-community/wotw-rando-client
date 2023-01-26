#pragma once
#include <Modloader/app/structs/ToolboxItemFilterAttribute.h>
#include <Modloader/app/structs/ToolboxItemFilterAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ToolboxItemFilterAttribute {
        inline app::ToolboxItemFilterAttribute__Class** type_info() {
            static app::ToolboxItemFilterAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ToolboxItemFilterAttribute__Class**)(modloader::win::memory::resolve_rva(0x0475BD00));
            }
            return cache;
        }
        inline app::ToolboxItemFilterAttribute__Class* get_class() {
            return il2cpp::get_class<app::ToolboxItemFilterAttribute__Class>(type_info(), "System.ComponentModel", "ToolboxItemFilterAttribute");
        }
        inline app::ToolboxItemFilterAttribute* create() {
            return il2cpp::create_object<app::ToolboxItemFilterAttribute>(get_class());
        }
    } // namespace ToolboxItemFilterAttribute
} // namespace app::classes::types
