#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnableSceneSuspendedAction_EnableRoutine_d_3 {
        inline app::EnableSceneSuspendedAction_EnableRoutine_d_3__Class** type_info = (app::EnableSceneSuspendedAction_EnableRoutine_d_3__Class**)(modloader::win::memory::resolve_rva(0x04786268));
        inline app::EnableSceneSuspendedAction_EnableRoutine_d_3__Class* get_class() {
            return il2cpp::get_nested_class<app::EnableSceneSuspendedAction_EnableRoutine_d_3__Class>(type_info, "", "EnableSceneSuspendedAction", "<EnableRoutine>d__3");
        }
        inline app::EnableSceneSuspendedAction_EnableRoutine_d_3* create() {
            return il2cpp::create_object<app::EnableSceneSuspendedAction_EnableRoutine_d_3>(get_class());
        }
    } // namespace EnableSceneSuspendedAction_EnableRoutine_d_3
} // namespace app::classes::types
