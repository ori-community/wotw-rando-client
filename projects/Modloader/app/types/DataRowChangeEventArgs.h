#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataRowChangeEventArgs__Class.h>
#include <Modloader/app/structs/DataRowChangeEventArgs.h>

namespace app::classes::types {
    namespace DataRowChangeEventArgs {
        inline app::DataRowChangeEventArgs__Class** type_info = (app::DataRowChangeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04778560));
        inline app::DataRowChangeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DataRowChangeEventArgs__Class>(type_info, "System.Data", "DataRowChangeEventArgs");
        }
        inline app::DataRowChangeEventArgs* create() {
            return il2cpp::create_object<app::DataRowChangeEventArgs>(get_class());
        }
    } // namespace DataRowChangeEventArgs
} // namespace app::classes::types
