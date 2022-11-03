#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlBinary__Array {
        inline app::SqlBinary__Array__Class** type_info = (app::SqlBinary__Array__Class**)(modloader::win::memory::resolve_rva(0x0475B788));
        inline app::SqlBinary__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlBinary__Array__Class>(type_info, "System.Data.SqlTypes", "SqlBinary[]");
        }
        inline app::SqlBinary__Array* create() {
            return il2cpp::create_object<app::SqlBinary__Array>(get_class());
        }
    } // namespace SqlBinary__Array
} // namespace app::classes::types
