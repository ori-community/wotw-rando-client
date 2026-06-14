#pragma once
#include <Modloader/app/structs/ListViewItem__Array.h>
#include <Modloader/app/structs/ListViewItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListViewItem__Array {
        inline app::ListViewItem__Array__Class** type_info() {
            static app::ListViewItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ListViewItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ListViewItem__Array__Class* get_class() {
            return il2cpp::get_class<app::ListViewItem__Array__Class>(type_info(), "Moon.UberStateVisualization", "ListViewItem[]");
        }
        inline app::ListViewItem__Array* create() {
            return il2cpp::create_object<app::ListViewItem__Array>(get_class());
        }
    } // namespace ListViewItem__Array
} // namespace app::classes::types
