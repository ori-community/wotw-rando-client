#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GeneralDebugMenuPage_c_DisplayClass18_1 {
        inline app::GeneralDebugMenuPage_c_DisplayClass18_1__Class** type_info = (app::GeneralDebugMenuPage_c_DisplayClass18_1__Class**)(modloader::win::memory::resolve_rva(0x04792A00));
        inline app::GeneralDebugMenuPage_c_DisplayClass18_1__Class* get_class() {
            return il2cpp::get_nested_class<app::GeneralDebugMenuPage_c_DisplayClass18_1__Class>(type_info, "", "GeneralDebugMenuPage", "<>c__DisplayClass18_1");
        }
        inline app::GeneralDebugMenuPage_c_DisplayClass18_1* create() {
            return il2cpp::create_object<app::GeneralDebugMenuPage_c_DisplayClass18_1>(get_class());
        }
    } // namespace GeneralDebugMenuPage_c_DisplayClass18_1
} // namespace app::classes::types
