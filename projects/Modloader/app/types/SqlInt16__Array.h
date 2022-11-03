#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlInt16__Array {
        inline app::SqlInt16__Array__Class** type_info = (app::SqlInt16__Array__Class**)(modloader::win::memory::resolve_rva(0x0470A058));
        inline app::SqlInt16__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlInt16__Array__Class>(type_info, "System.Data.SqlTypes", "SqlInt16[]");
        }
        inline app::SqlInt16__Array* create() {
            return il2cpp::create_object<app::SqlInt16__Array>(get_class());
        }
    } // namespace SqlInt16__Array
} // namespace app::classes::types
