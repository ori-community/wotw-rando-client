#pragma once
#include <Modloader/app/structs/DataRowCollection.h>
#include <Modloader/app/structs/DataRowCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataRowCollection {
        inline app::DataRowCollection__Class** type_info() {
            static app::DataRowCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataRowCollection__Class**)(modloader::win::memory::resolve_rva(0x0473CBA8));
            }
            return cache;
        }
        inline app::DataRowCollection__Class* get_class() {
            return il2cpp::get_class<app::DataRowCollection__Class>(type_info(), "System.Data", "DataRowCollection");
        }
        inline app::DataRowCollection* create() {
            return il2cpp::create_object<app::DataRowCollection>(get_class());
        }
    } // namespace DataRowCollection
} // namespace app::classes::types
