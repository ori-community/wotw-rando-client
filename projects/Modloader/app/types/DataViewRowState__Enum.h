#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataViewRowState__Enum {
        inline app::DataViewRowState__Enum__Class** type_info = (app::DataViewRowState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04796098));
        inline app::DataViewRowState__Enum__Class* get_class() {
            return il2cpp::get_class<app::DataViewRowState__Enum__Class>(type_info, "System.Data", "DataViewRowState");
        }
        inline app::DataViewRowState__Enum* create() {
            return il2cpp::create_object<app::DataViewRowState__Enum>(get_class());
        }
    } // namespace DataViewRowState__Enum
} // namespace app::classes::types
