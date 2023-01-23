#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DebugMenuTogglerItem__Class.h>
#include <Modloader/app/structs/DebugMenuTogglerItem.h>

namespace app::classes::types {
    namespace DebugMenuTogglerItem {
        inline app::DebugMenuTogglerItem__Class** type_info = (app::DebugMenuTogglerItem__Class**)(modloader::win::memory::resolve_rva(0x047547D0));
        inline app::DebugMenuTogglerItem__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuTogglerItem__Class>(type_info, "", "DebugMenuTogglerItem");
        }
        inline app::DebugMenuTogglerItem* create() {
            return il2cpp::create_object<app::DebugMenuTogglerItem>(get_class());
        }
    } // namespace DebugMenuTogglerItem
} // namespace app::classes::types
