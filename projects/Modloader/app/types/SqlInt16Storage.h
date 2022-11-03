#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlInt16Storage {
        inline app::SqlInt16Storage__Class** type_info = (app::SqlInt16Storage__Class**)(modloader::win::memory::resolve_rva(0x0476DF60));
        inline app::SqlInt16Storage__Class* get_class() {
            return il2cpp::get_class<app::SqlInt16Storage__Class>(type_info, "System.Data.Common", "SqlInt16Storage");
        }
        inline app::SqlInt16Storage* create() {
            return il2cpp::create_object<app::SqlInt16Storage>(get_class());
        }
    } // namespace SqlInt16Storage
} // namespace app::classes::types
