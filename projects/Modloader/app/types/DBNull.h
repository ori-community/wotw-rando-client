#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DBNull {
        inline app::DBNull__Class** type_info = (app::DBNull__Class**)(modloader::win::memory::resolve_rva(0x04797A70));
        inline app::DBNull__Class* get_class() {
            return il2cpp::get_class<app::DBNull__Class>(type_info, "System", "DBNull");
        }
        inline app::DBNull* create() {
            return il2cpp::create_object<app::DBNull>(get_class());
        }
    } // namespace DBNull
} // namespace app::classes::types
