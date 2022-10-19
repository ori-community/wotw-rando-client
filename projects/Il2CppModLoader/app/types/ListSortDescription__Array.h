#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListSortDescription__Array {
        inline app::ListSortDescription__Array__Class** type_info = (app::ListSortDescription__Array__Class**)(modloader::win::memory::resolve_rva(0x0473FA48));
        inline app::ListSortDescription__Array__Class* get_class() {
            return il2cpp::get_class<app::ListSortDescription__Array__Class>(type_info, "System.ComponentModel", "ListSortDescription[]");
        }
        inline app::ListSortDescription__Array* create() {
            return il2cpp::create_object<app::ListSortDescription__Array>(get_class());
        }
    } // namespace ListSortDescription__Array
} // namespace app::classes::types
