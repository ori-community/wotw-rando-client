#pragma once
#include <Modloader/app/structs/BowArrow_c_DisplayClass107_0.h>
#include <Modloader/app/structs/BowArrow_c_DisplayClass107_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BowArrow_c_DisplayClass107_0 {
        inline app::BowArrow_c_DisplayClass107_0__Class** type_info() {
            static app::BowArrow_c_DisplayClass107_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BowArrow_c_DisplayClass107_0__Class**)(modloader::win::memory::resolve_rva(0x04752740));
            }
            return cache;
        }
        inline app::BowArrow_c_DisplayClass107_0__Class* get_class() {
            return il2cpp::get_nested_class<app::BowArrow_c_DisplayClass107_0__Class>(type_info(), "", "BowArrow", "<>c__DisplayClass107_0");
        }
        inline app::BowArrow_c_DisplayClass107_0* create() {
            return il2cpp::create_object<app::BowArrow_c_DisplayClass107_0>(get_class());
        }
    } // namespace BowArrow_c_DisplayClass107_0
} // namespace app::classes::types
