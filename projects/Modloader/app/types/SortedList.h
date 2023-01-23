#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SortedList__Class.h>
#include <Modloader/app/structs/SortedList.h>

namespace app::classes::types {
    namespace SortedList {
        inline app::SortedList__Class** type_info = (app::SortedList__Class**)(modloader::win::memory::resolve_rva(0x047128C8));
        inline app::SortedList__Class* get_class() {
            return il2cpp::get_class<app::SortedList__Class>(type_info, "System.Collections", "SortedList");
        }
        inline app::SortedList* create() {
            return il2cpp::create_object<app::SortedList>(get_class());
        }
    } // namespace SortedList
} // namespace app::classes::types
