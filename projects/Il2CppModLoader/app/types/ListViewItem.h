#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListViewItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListViewItem__Class** type_info;
        inline app::ListViewItem__Class* get_class() {
            return il2cpp::get_class<app::ListViewItem__Class>(type_info, "Moon.UberStateVisualization", "ListViewItem");
        }
        inline app::ListViewItem* create() {
            return il2cpp::create_object<app::ListViewItem>(get_class());
        }
        inline app::ListViewItem__Array* create_array(int size) {
            return il2cpp::array_new<app::ListViewItem__Array>(get_class(), size);
        }
    } // namespace ListViewItem
} // namespace app::classes::types
