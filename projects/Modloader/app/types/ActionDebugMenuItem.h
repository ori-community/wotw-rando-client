#pragma once
#include <Modloader/app/structs/ActionDebugMenuItem.h>
#include <Modloader/app/structs/ActionDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionDebugMenuItem {
        inline app::ActionDebugMenuItem__Class** type_info() {
            static app::ActionDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActionDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04708330));
            }
            return cache;
        }
        inline app::ActionDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::ActionDebugMenuItem__Class>(type_info(), "", "ActionDebugMenuItem");
        }
        inline app::ActionDebugMenuItem* create() {
            return il2cpp::create_object<app::ActionDebugMenuItem>(get_class());
        }
    } // namespace ActionDebugMenuItem
} // namespace app::classes::types
