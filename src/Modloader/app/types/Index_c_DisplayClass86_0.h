#pragma once
#include <Modloader/app/structs/Index_c_DisplayClass86_0.h>
#include <Modloader/app/structs/Index_c_DisplayClass86_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Index_c_DisplayClass86_0 {
        inline app::Index_c_DisplayClass86_0__Class** type_info() {
            static app::Index_c_DisplayClass86_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Index_c_DisplayClass86_0__Class**)(modloader::win::memory::resolve_rva(0x04757FE0));
            }
            return cache;
        }
        inline app::Index_c_DisplayClass86_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Index_c_DisplayClass86_0__Class>(type_info(), "System.Data", "Index", "<>c__DisplayClass86_0");
        }
        inline app::Index_c_DisplayClass86_0* create() {
            return il2cpp::create_object<app::Index_c_DisplayClass86_0>(get_class());
        }
    } // namespace Index_c_DisplayClass86_0
} // namespace app::classes::types
