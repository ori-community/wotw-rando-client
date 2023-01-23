#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListSortDescriptionCollection__Class.h>
#include <Modloader/app/structs/ListSortDescriptionCollection.h>

namespace app::classes::types {
    namespace ListSortDescriptionCollection {
        inline app::ListSortDescriptionCollection__Class** type_info = (app::ListSortDescriptionCollection__Class**)(modloader::win::memory::resolve_rva(0x0472E7D0));
        inline app::ListSortDescriptionCollection__Class* get_class() {
            return il2cpp::get_class<app::ListSortDescriptionCollection__Class>(type_info, "System.ComponentModel", "ListSortDescriptionCollection");
        }
        inline app::ListSortDescriptionCollection* create() {
            return il2cpp::create_object<app::ListSortDescriptionCollection>(get_class());
        }
    } // namespace ListSortDescriptionCollection
} // namespace app::classes::types
