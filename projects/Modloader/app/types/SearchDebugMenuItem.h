#pragma once
#include <Modloader/app/structs/SearchDebugMenuItem.h>
#include <Modloader/app/structs/SearchDebugMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SearchDebugMenuItem {
        inline app::SearchDebugMenuItem__Class** type_info() {
            static app::SearchDebugMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SearchDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x047210E8));
            }
            return cache;
        }
        inline app::SearchDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::SearchDebugMenuItem__Class>(type_info(), "", "SearchDebugMenuItem");
        }
        inline app::SearchDebugMenuItem* create() {
            return il2cpp::create_object<app::SearchDebugMenuItem>(get_class());
        }
    } // namespace SearchDebugMenuItem
} // namespace app::classes::types
