#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MenuScreenManager_c_DisplayClass112_0 {
        inline app::MenuScreenManager_c_DisplayClass112_0__Class** type_info = (app::MenuScreenManager_c_DisplayClass112_0__Class**)(modloader::win::memory::resolve_rva(0x0476E280));
        inline app::MenuScreenManager_c_DisplayClass112_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MenuScreenManager_c_DisplayClass112_0__Class>(type_info, "", "MenuScreenManager", "<>c__DisplayClass112_0");
        }
        inline app::MenuScreenManager_c_DisplayClass112_0* create() {
            return il2cpp::create_object<app::MenuScreenManager_c_DisplayClass112_0>(get_class());
        }
    } // namespace MenuScreenManager_c_DisplayClass112_0
} // namespace app::classes::types
