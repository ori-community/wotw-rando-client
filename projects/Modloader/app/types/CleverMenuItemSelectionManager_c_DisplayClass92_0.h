#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager_c_DisplayClass92_0__Class.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager_c_DisplayClass92_0.h>

namespace app::classes::types {
    namespace CleverMenuItemSelectionManager_c_DisplayClass92_0 {
        inline app::CleverMenuItemSelectionManager_c_DisplayClass92_0__Class** type_info = (app::CleverMenuItemSelectionManager_c_DisplayClass92_0__Class**)(modloader::win::memory::resolve_rva(0x0470B168));
        inline app::CleverMenuItemSelectionManager_c_DisplayClass92_0__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItemSelectionManager_c_DisplayClass92_0__Class>(type_info, "", "CleverMenuItemSelectionManager", "<>c__DisplayClass92_0");
        }
        inline app::CleverMenuItemSelectionManager_c_DisplayClass92_0* create() {
            return il2cpp::create_object<app::CleverMenuItemSelectionManager_c_DisplayClass92_0>(get_class());
        }
    } // namespace CleverMenuItemSelectionManager_c_DisplayClass92_0
} // namespace app::classes::types
