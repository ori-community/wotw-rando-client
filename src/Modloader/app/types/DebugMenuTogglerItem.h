#pragma once
#include <Modloader/app/structs/DebugMenuTogglerItem.h>
#include <Modloader/app/structs/DebugMenuTogglerItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugMenuTogglerItem {
        inline app::DebugMenuTogglerItem__Class** type_info() {
            static app::DebugMenuTogglerItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebugMenuTogglerItem__Class**)(modloader::win::memory::resolve_rva(0x047547D0));
            }
            return cache;
        }
        inline app::DebugMenuTogglerItem__Class* get_class() {
            return il2cpp::get_class<app::DebugMenuTogglerItem__Class>(type_info(), "", "DebugMenuTogglerItem");
        }
        inline app::DebugMenuTogglerItem* create() {
            return il2cpp::create_object<app::DebugMenuTogglerItem>(get_class());
        }
    } // namespace DebugMenuTogglerItem
} // namespace app::classes::types
