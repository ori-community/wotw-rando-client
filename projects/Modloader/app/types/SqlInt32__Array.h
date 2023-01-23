#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlInt32__Array__Class.h>
#include <Modloader/app/structs/SqlInt32__Array.h>

namespace app::classes::types {
    namespace SqlInt32__Array {
        inline app::SqlInt32__Array__Class** type_info = (app::SqlInt32__Array__Class**)(modloader::win::memory::resolve_rva(0x04728BA8));
        inline app::SqlInt32__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlInt32__Array__Class>(type_info, "System.Data.SqlTypes", "SqlInt32[]");
        }
        inline app::SqlInt32__Array* create() {
            return il2cpp::create_object<app::SqlInt32__Array>(get_class());
        }
    } // namespace SqlInt32__Array
} // namespace app::classes::types
