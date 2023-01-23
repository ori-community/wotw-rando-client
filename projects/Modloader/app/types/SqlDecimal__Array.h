#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlDecimal__Array__Class.h>
#include <Modloader/app/structs/SqlDecimal__Array.h>

namespace app::classes::types {
    namespace SqlDecimal__Array {
        inline app::SqlDecimal__Array__Class** type_info = (app::SqlDecimal__Array__Class**)(modloader::win::memory::resolve_rva(0x04742FC0));
        inline app::SqlDecimal__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlDecimal__Array__Class>(type_info, "System.Data.SqlTypes", "SqlDecimal[]");
        }
        inline app::SqlDecimal__Array* create() {
            return il2cpp::create_object<app::SqlDecimal__Array>(get_class());
        }
    } // namespace SqlDecimal__Array
} // namespace app::classes::types
