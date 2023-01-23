#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataTableClearEventArgs__Class.h>
#include <Modloader/app/structs/DataTableClearEventArgs.h>

namespace app::classes::types {
    namespace DataTableClearEventArgs {
        inline app::DataTableClearEventArgs__Class** type_info = (app::DataTableClearEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0472E7C8));
        inline app::DataTableClearEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DataTableClearEventArgs__Class>(type_info, "System.Data", "DataTableClearEventArgs");
        }
        inline app::DataTableClearEventArgs* create() {
            return il2cpp::create_object<app::DataTableClearEventArgs>(get_class());
        }
    } // namespace DataTableClearEventArgs
} // namespace app::classes::types
