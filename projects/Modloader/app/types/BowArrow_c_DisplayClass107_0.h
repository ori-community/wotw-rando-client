#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BowArrow_c_DisplayClass107_0 {
        inline app::BowArrow_c_DisplayClass107_0__Class** type_info = (app::BowArrow_c_DisplayClass107_0__Class**)(modloader::win::memory::resolve_rva(0x04752740));
        inline app::BowArrow_c_DisplayClass107_0__Class* get_class() {
            return il2cpp::get_nested_class<app::BowArrow_c_DisplayClass107_0__Class>(type_info, "", "BowArrow", "<>c__DisplayClass107_0");
        }
        inline app::BowArrow_c_DisplayClass107_0* create() {
            return il2cpp::create_object<app::BowArrow_c_DisplayClass107_0>(get_class());
        }
    } // namespace BowArrow_c_DisplayClass107_0
} // namespace app::classes::types
