#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SortedList_ValueList {
        inline app::SortedList_ValueList__Class** type_info = (app::SortedList_ValueList__Class**)(modloader::win::memory::resolve_rva(0x0478D160));
        inline app::SortedList_ValueList__Class* get_class() {
            return il2cpp::get_nested_class<app::SortedList_ValueList__Class>(type_info, "System.Collections", "SortedList", "ValueList");
        }
        inline app::SortedList_ValueList* create() {
            return il2cpp::create_object<app::SortedList_ValueList>(get_class());
        }
    } // namespace SortedList_ValueList
} // namespace app::classes::types
