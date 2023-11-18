#pragma once
#include <Modloader/app/structs/ListSortDescriptionCollection.h>
#include <Modloader/app/structs/ListSortDescriptionCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListSortDescriptionCollection {
        inline app::ListSortDescriptionCollection__Class** type_info() {
            static app::ListSortDescriptionCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListSortDescriptionCollection__Class**)(modloader::win::memory::resolve_rva(0x0472E7D0));
            }
            return cache;
        }
        inline app::ListSortDescriptionCollection__Class* get_class() {
            return il2cpp::get_class<app::ListSortDescriptionCollection__Class>(type_info(), "System.ComponentModel", "ListSortDescriptionCollection");
        }
        inline app::ListSortDescriptionCollection* create() {
            return il2cpp::create_object<app::ListSortDescriptionCollection>(get_class());
        }
    } // namespace ListSortDescriptionCollection
} // namespace app::classes::types
