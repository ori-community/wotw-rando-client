#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MenuScreenManager_c {
        inline app::MenuScreenManager_c__Class** type_info = (app::MenuScreenManager_c__Class**)(modloader::win::memory::resolve_rva(0x047542A0));
        inline app::MenuScreenManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MenuScreenManager_c__Class>(type_info, "", "MenuScreenManager", "<>c");
        }
        inline app::MenuScreenManager_c* create() {
            return il2cpp::create_object<app::MenuScreenManager_c>(get_class());
        }
    } // namespace MenuScreenManager_c
} // namespace app::classes::types
