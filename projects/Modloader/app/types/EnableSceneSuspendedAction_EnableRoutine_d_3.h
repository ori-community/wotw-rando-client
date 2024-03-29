#pragma once
#include <Modloader/app/structs/EnableSceneSuspendedAction_EnableRoutine_d_3.h>
#include <Modloader/app/structs/EnableSceneSuspendedAction_EnableRoutine_d_3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnableSceneSuspendedAction_EnableRoutine_d_3 {
        inline app::EnableSceneSuspendedAction_EnableRoutine_d_3__Class** type_info() {
            static app::EnableSceneSuspendedAction_EnableRoutine_d_3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnableSceneSuspendedAction_EnableRoutine_d_3__Class**)(modloader::win::memory::resolve_rva(0x04786268));
            }
            return cache;
        }
        inline app::EnableSceneSuspendedAction_EnableRoutine_d_3__Class* get_class() {
            return il2cpp::get_nested_class<app::EnableSceneSuspendedAction_EnableRoutine_d_3__Class>(type_info(), "", "EnableSceneSuspendedAction", "<EnableRoutine>d__3");
        }
        inline app::EnableSceneSuspendedAction_EnableRoutine_d_3* create() {
            return il2cpp::create_object<app::EnableSceneSuspendedAction_EnableRoutine_d_3>(get_class());
        }
    } // namespace EnableSceneSuspendedAction_EnableRoutine_d_3
} // namespace app::classes::types
