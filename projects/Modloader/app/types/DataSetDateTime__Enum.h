#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataSetDateTime__Enum {
        inline app::DataSetDateTime__Enum__Class** type_info = (app::DataSetDateTime__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470AD68));
        inline app::DataSetDateTime__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataSetDateTime__Enum__Class>(type_info, "System.Data", "DataSetDateTime");
        }
        inline app::DataSetDateTime__Enum* create() {
            return il2cpp::create_object<app::DataSetDateTime__Enum>(get_class());
        }
    } // namespace DataSetDateTime__Enum
} // namespace app::classes::types
