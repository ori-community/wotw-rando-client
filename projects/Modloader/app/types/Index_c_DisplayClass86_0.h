#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Index_c_DisplayClass86_0 {
        inline app::Index_c_DisplayClass86_0__Class** type_info = (app::Index_c_DisplayClass86_0__Class**)(modloader::win::memory::resolve_rva(0x04757FE0));
        inline app::Index_c_DisplayClass86_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Index_c_DisplayClass86_0__Class>(type_info, "System.Data", "Index", "<>c__DisplayClass86_0");
        }
        inline app::Index_c_DisplayClass86_0* create() {
            return il2cpp::create_object<app::Index_c_DisplayClass86_0>(get_class());
        }
    } // namespace Index_c_DisplayClass86_0
} // namespace app::classes::types
