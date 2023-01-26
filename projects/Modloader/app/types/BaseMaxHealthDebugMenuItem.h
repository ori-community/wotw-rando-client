#pragma once
#include <Modloader/app/structs/BaseMaxHealthDebugMenuItem.h>
#include <Modloader/app/structs/BaseMaxHealthDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseMaxHealthDebugMenuItem {
        inline app::BaseMaxHealthDebugMenuItem__Class** type_info() {
            static app::BaseMaxHealthDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BaseMaxHealthDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x0477CB00));
            }
            return cache;
        }
        inline app::BaseMaxHealthDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::BaseMaxHealthDebugMenuItem__Class>(type_info(), "", "BaseMaxHealthDebugMenuItem");
        }
        inline app::BaseMaxHealthDebugMenuItem* create() {
            return il2cpp::create_object<app::BaseMaxHealthDebugMenuItem>(get_class());
        }
    } // namespace BaseMaxHealthDebugMenuItem
} // namespace app::classes::types
