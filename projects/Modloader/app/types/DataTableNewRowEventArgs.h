#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataTableNewRowEventArgs {
        inline app::DataTableNewRowEventArgs__Class** type_info = (app::DataTableNewRowEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04770310));
        inline app::DataTableNewRowEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DataTableNewRowEventArgs__Class>(type_info, "System.Data", "DataTableNewRowEventArgs");
        }
        inline app::DataTableNewRowEventArgs* create() {
            return il2cpp::create_object<app::DataTableNewRowEventArgs>(get_class());
        }
    } // namespace DataTableNewRowEventArgs
} // namespace app::classes::types
