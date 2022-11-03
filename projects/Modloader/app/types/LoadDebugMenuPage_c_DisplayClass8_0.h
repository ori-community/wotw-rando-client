#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadDebugMenuPage_c_DisplayClass8_0 {
        inline app::LoadDebugMenuPage_c_DisplayClass8_0__Class** type_info = (app::LoadDebugMenuPage_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x0474E760));
        inline app::LoadDebugMenuPage_c_DisplayClass8_0__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadDebugMenuPage_c_DisplayClass8_0__Class>(type_info, "", "LoadDebugMenuPage", "<>c__DisplayClass8_0");
        }
        inline app::LoadDebugMenuPage_c_DisplayClass8_0* create() {
            return il2cpp::create_object<app::LoadDebugMenuPage_c_DisplayClass8_0>(get_class());
        }
    } // namespace LoadDebugMenuPage_c_DisplayClass8_0
} // namespace app::classes::types
