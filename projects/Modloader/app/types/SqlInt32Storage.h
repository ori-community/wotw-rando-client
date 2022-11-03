#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlInt32Storage {
        inline app::SqlInt32Storage__Class** type_info = (app::SqlInt32Storage__Class**)(modloader::win::memory::resolve_rva(0x04768FB0));
        inline app::SqlInt32Storage__Class* get_class() {
            return il2cpp::get_class<app::SqlInt32Storage__Class>(type_info, "System.Data.Common", "SqlInt32Storage");
        }
        inline app::SqlInt32Storage* create() {
            return il2cpp::create_object<app::SqlInt32Storage>(get_class());
        }
    } // namespace SqlInt32Storage
} // namespace app::classes::types
