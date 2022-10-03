#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriggerColliderCallback_OnTrigger_Callback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TriggerColliderCallback_OnTrigger_Callback__Class** type_info;
        inline app::TriggerColliderCallback_OnTrigger_Callback__Class* get_class() {
            return il2cpp::get_nested_class<app::TriggerColliderCallback_OnTrigger_Callback__Class>(type_info, "", "TriggerColliderCallback", "OnTrigger_Callback");
        }
        inline app::TriggerColliderCallback_OnTrigger_Callback* create() {
            return il2cpp::create_object<app::TriggerColliderCallback_OnTrigger_Callback>(get_class());
        }
    } // namespace TriggerColliderCallback_OnTrigger_Callback
} // namespace app::classes::types
