#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SortedList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SortedList__Class** type_info;
        inline app::SortedList__Class* get_class() {
            return il2cpp::get_class<app::SortedList__Class>(type_info, "System.Collections", "SortedList");
        }
        inline app::SortedList* create() {
            return il2cpp::create_object<app::SortedList>(get_class());
        }
    } // namespace SortedList
} // namespace app::classes::types
