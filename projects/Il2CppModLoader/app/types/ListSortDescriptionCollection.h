#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListSortDescriptionCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListSortDescriptionCollection__Class** type_info;
        inline app::ListSortDescriptionCollection__Class* get_class() {
            return il2cpp::get_class<app::ListSortDescriptionCollection__Class>(type_info, "System.ComponentModel", "ListSortDescriptionCollection");
        }
        inline app::ListSortDescriptionCollection* create() {
            return il2cpp::create_object<app::ListSortDescriptionCollection>(get_class());
        }
    } // namespace ListSortDescriptionCollection
} // namespace app::classes::types
