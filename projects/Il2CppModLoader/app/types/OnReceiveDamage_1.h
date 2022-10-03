#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnReceiveDamage_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OnReceiveDamage_1__Class** type_info;
        inline app::OnReceiveDamage_1__Class* get_class() {
            return il2cpp::get_class<app::OnReceiveDamage_1__Class>(type_info, "UberBehaviourTree.Events", "OnReceiveDamage");
        }
        inline app::OnReceiveDamage_1* create() {
            return il2cpp::create_object<app::OnReceiveDamage_1>(get_class());
        }
    } // namespace OnReceiveDamage_1
} // namespace app::classes::types
