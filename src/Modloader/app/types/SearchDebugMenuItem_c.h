#pragma once
#include <Modloader/app/structs/SearchDebugMenuItem_c.h>
#include <Modloader/app/structs/SearchDebugMenuItem_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SearchDebugMenuItem_c {
        inline app::SearchDebugMenuItem_c__Class** type_info() {
            static app::SearchDebugMenuItem_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SearchDebugMenuItem_c__Class**)(modloader::win::memory::resolve_rva(0x04747508));
            }
            return cache;
        }
        inline app::SearchDebugMenuItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SearchDebugMenuItem_c__Class>(type_info(), "", "SearchDebugMenuItem", "<>c");
        }
        inline app::SearchDebugMenuItem_c* create() {
            return il2cpp::create_object<app::SearchDebugMenuItem_c>(get_class());
        }
    } // namespace SearchDebugMenuItem_c
} // namespace app::classes::types
