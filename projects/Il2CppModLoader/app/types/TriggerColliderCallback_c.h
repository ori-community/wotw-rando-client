#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriggerColliderCallback_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TriggerColliderCallback_c__Class** type_info;
        inline app::TriggerColliderCallback_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TriggerColliderCallback_c__Class>(type_info, "", "TriggerColliderCallback", "<>c");
        }
        inline app::TriggerColliderCallback_c* create() {
            return il2cpp::create_object<app::TriggerColliderCallback_c>(get_class());
        }
    } // namespace TriggerColliderCallback_c
} // namespace app::classes::types
