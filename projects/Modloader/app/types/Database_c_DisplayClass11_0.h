#pragma once
#include <Modloader/app/structs/Database_c_DisplayClass11_0.h>
#include <Modloader/app/structs/Database_c_DisplayClass11_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Database_c_DisplayClass11_0 {
        inline app::Database_c_DisplayClass11_0__Class** type_info() {
            static app::Database_c_DisplayClass11_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Database_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x0474F0A0));
            }
            return cache;
        }
        inline app::Database_c_DisplayClass11_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Database_c_DisplayClass11_0__Class>(type_info(), "Moon.Race", "Database", "<>c__DisplayClass11_0");
        }
        inline app::Database_c_DisplayClass11_0* create() {
            return il2cpp::create_object<app::Database_c_DisplayClass11_0>(get_class());
        }
    } // namespace Database_c_DisplayClass11_0
} // namespace app::classes::types
