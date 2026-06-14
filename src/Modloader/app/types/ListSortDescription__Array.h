#pragma once
#include <Modloader/app/structs/ListSortDescription__Array.h>
#include <Modloader/app/structs/ListSortDescription__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListSortDescription__Array {
        inline app::ListSortDescription__Array__Class** type_info() {
            static app::ListSortDescription__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListSortDescription__Array__Class**)(modloader::win::memory::resolve_rva(0x0473FA48));
            }
            return cache;
        }
        inline app::ListSortDescription__Array__Class* get_class() {
            return il2cpp::get_class<app::ListSortDescription__Array__Class>(type_info(), "System.ComponentModel", "ListSortDescription[]");
        }
        inline app::ListSortDescription__Array* create() {
            return il2cpp::create_object<app::ListSortDescription__Array>(get_class());
        }
    } // namespace ListSortDescription__Array
} // namespace app::classes::types
