#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataColumnCollection__Class.h>
#include <Modloader/app/structs/DataColumnCollection.h>

namespace app::classes::types {
    namespace DataColumnCollection {
        inline app::DataColumnCollection__Class** type_info = (app::DataColumnCollection__Class**)(modloader::win::memory::resolve_rva(0x04739DD8));
        inline app::DataColumnCollection__Class* get_class() {
            return il2cpp::get_class<app::DataColumnCollection__Class>(type_info, "System.Data", "DataColumnCollection");
        }
        inline app::DataColumnCollection* create() {
            return il2cpp::create_object<app::DataColumnCollection>(get_class());
        }
    } // namespace DataColumnCollection
} // namespace app::classes::types
