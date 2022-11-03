#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataSet {
        inline app::DataSet__Class** type_info = (app::DataSet__Class**)(modloader::win::memory::resolve_rva(0x04777BB8));
        inline app::DataSet__Class* get_class() {
            return il2cpp::get_class<app::DataSet__Class>(type_info, "System.Data", "DataSet");
        }
        inline app::DataSet* create() {
            return il2cpp::create_object<app::DataSet>(get_class());
        }
    } // namespace DataSet
} // namespace app::classes::types
