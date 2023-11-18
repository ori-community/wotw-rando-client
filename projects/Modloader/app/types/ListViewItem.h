#pragma once
#include <Modloader/app/structs/ListViewItem.h>
#include <Modloader/app/structs/ListViewItem__Array.h>
#include <Modloader/app/structs/ListViewItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListViewItem {
        inline app::ListViewItem__Class** type_info() {
            static app::ListViewItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListViewItem__Class**)(modloader::win::memory::resolve_rva(0x04702868));
            }
            return cache;
        }
        inline app::ListViewItem__Class* get_class() {
            return il2cpp::get_class<app::ListViewItem__Class>(type_info(), "Moon.UberStateVisualization", "ListViewItem");
        }
        inline app::ListViewItem* create() {
            return il2cpp::create_object<app::ListViewItem>(get_class());
        }
        inline app::ListViewItem__Array* create_array(int size) {
            return il2cpp::array_new<app::ListViewItem__Array>(get_class(), size);
        }
        inline app::ListViewItem__Array* create_array(const std::vector<app::ListViewItem*>& items) {
            return il2cpp::array_new<app::ListViewItem__Array>(get_class(), items);
        }
    } // namespace ListViewItem
} // namespace app::classes::types
