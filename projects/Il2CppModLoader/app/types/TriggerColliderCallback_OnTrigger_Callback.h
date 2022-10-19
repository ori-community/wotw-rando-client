#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriggerColliderCallback_OnTrigger_Callback {
        inline app::TriggerColliderCallback_OnTrigger_Callback__Class** type_info = (app::TriggerColliderCallback_OnTrigger_Callback__Class**)(modloader::win::memory::resolve_rva(0x0476CC68));
        inline app::TriggerColliderCallback_OnTrigger_Callback__Class* get_class() {
            return il2cpp::get_nested_class<app::TriggerColliderCallback_OnTrigger_Callback__Class>(type_info, "", "TriggerColliderCallback", "OnTrigger_Callback");
        }
        inline app::TriggerColliderCallback_OnTrigger_Callback* create() {
            return il2cpp::create_object<app::TriggerColliderCallback_OnTrigger_Callback>(get_class());
        }
    } // namespace TriggerColliderCallback_OnTrigger_Callback
} // namespace app::classes::types
