#pragma once
#include <Modloader/app/structs/NavigableOnGUI_1.h>
#include <Modloader/app/structs/NavigableOnGUI_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NavigableOnGUI_1 {
        inline app::NavigableOnGUI_1__Class** type_info() {
            static app::NavigableOnGUI_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NavigableOnGUI_1__Class**)(modloader::win::memory::resolve_rva(0x04767F98));
            }
            return cache;
        }
        inline app::NavigableOnGUI_1__Class* get_class() {
            return il2cpp::get_class<app::NavigableOnGUI_1__Class>(type_info(), "", "NavigableOnGUI");
        }
        inline app::NavigableOnGUI_1* create() {
            return il2cpp::create_object<app::NavigableOnGUI_1>(get_class());
        }
    } // namespace NavigableOnGUI_1
} // namespace app::classes::types
