#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlInt64Storage {
        inline app::SqlInt64Storage__Class** type_info = (app::SqlInt64Storage__Class**)(modloader::win::memory::resolve_rva(0x04729430));
        inline app::SqlInt64Storage__Class* get_class() {
            return il2cpp::get_class<app::SqlInt64Storage__Class>(type_info, "System.Data.Common", "SqlInt64Storage");
        }
        inline app::SqlInt64Storage* create() {
            return il2cpp::create_object<app::SqlInt64Storage>(get_class());
        }
    } // namespace SqlInt64Storage
} // namespace app::classes::types
