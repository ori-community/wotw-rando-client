#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataTableCollection__Class.h>
#include <Modloader/app/structs/DataTableCollection.h>

namespace app::classes::types {
    namespace DataTableCollection {
        inline app::DataTableCollection__Class** type_info = (app::DataTableCollection__Class**)(modloader::win::memory::resolve_rva(0x0475E418));
        inline app::DataTableCollection__Class* get_class() {
            return il2cpp::get_class<app::DataTableCollection__Class>(type_info, "System.Data", "DataTableCollection");
        }
        inline app::DataTableCollection* create() {
            return il2cpp::create_object<app::DataTableCollection>(get_class());
        }
    } // namespace DataTableCollection
} // namespace app::classes::types
