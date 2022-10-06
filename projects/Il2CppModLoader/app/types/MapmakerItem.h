#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MapmakerItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MapmakerItem__Class** type_info;
        inline app::MapmakerItem__Class* get_class() {
            return il2cpp::get_class<app::MapmakerItem__Class>(type_info, "", "MapmakerItem");
        }
        inline app::MapmakerItem* create() {
            return il2cpp::create_object<app::MapmakerItem>(get_class());
        }
        inline app::MapmakerItem__Array* create_array(int size) {
            return il2cpp::array_new<app::MapmakerItem__Array>(get_class(), size);
        }
        inline app::MapmakerItem__Array* create_array(const std::vector<app::MapmakerItem*>& items) {
            return il2cpp::array_new<app::MapmakerItem__Array>(get_class(), items);
        }
    } // namespace MapmakerItem
} // namespace app::classes::types
