#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_c_DisplayClass20_0__Class.h>
#include <Modloader/app/structs/NewSetupStateControllerResolver_c_DisplayClass20_0.h>

namespace app::classes::types {
    namespace NewSetupStateControllerResolver_c_DisplayClass20_0 {
        inline app::NewSetupStateControllerResolver_c_DisplayClass20_0__Class** type_info = (app::NewSetupStateControllerResolver_c_DisplayClass20_0__Class**)(modloader::win::memory::resolve_rva(0x047468B8));
        inline app::NewSetupStateControllerResolver_c_DisplayClass20_0__Class* get_class() {
            return il2cpp::get_nested_class<app::NewSetupStateControllerResolver_c_DisplayClass20_0__Class>(type_info, "Moon", "NewSetupStateControllerResolver", "<>c__DisplayClass20_0");
        }
        inline app::NewSetupStateControllerResolver_c_DisplayClass20_0* create() {
            return il2cpp::create_object<app::NewSetupStateControllerResolver_c_DisplayClass20_0>(get_class());
        }
    } // namespace NewSetupStateControllerResolver_c_DisplayClass20_0
} // namespace app::classes::types
