#pragma once
#include <Modloader/app/structs/ToolboxItemFilterType__Enum.h>
#include <Modloader/app/structs/ToolboxItemFilterType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ToolboxItemFilterType__Enum {
        inline app::ToolboxItemFilterType__Enum__Class** type_info() {
            static app::ToolboxItemFilterType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ToolboxItemFilterType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047483D0));
            }
            return cache;
        }
        inline app::ToolboxItemFilterType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ToolboxItemFilterType__Enum__Class>(type_info(), "System.ComponentModel", "ToolboxItemFilterType");
        }
        inline app::ToolboxItemFilterType__Enum* create() {
            return il2cpp::create_object<app::ToolboxItemFilterType__Enum>(get_class());
        }
    } // namespace ToolboxItemFilterType__Enum
} // namespace app::classes::types
