#pragma once
#include <Modloader/app/structs/IntDebugMenuItem.h>
#include <Modloader/app/structs/IntDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntDebugMenuItem {
        inline app::IntDebugMenuItem__Class** type_info() {
            static app::IntDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IntDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04790CA0));
            }
            return cache;
        }
        inline app::IntDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::IntDebugMenuItem__Class>(type_info(), "", "IntDebugMenuItem");
        }
        inline app::IntDebugMenuItem* create() {
            return il2cpp::create_object<app::IntDebugMenuItem>(get_class());
        }
    } // namespace IntDebugMenuItem
} // namespace app::classes::types
