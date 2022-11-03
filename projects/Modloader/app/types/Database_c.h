#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Database_c {
        inline app::Database_c__Class** type_info = (app::Database_c__Class**)(modloader::win::memory::resolve_rva(0x0475F6C8));
        inline app::Database_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Database_c__Class>(type_info, "Moon.Race", "Database", "<>c");
        }
        inline app::Database_c* create() {
            return il2cpp::create_object<app::Database_c>(get_class());
        }
    } // namespace Database_c
} // namespace app::classes::types
