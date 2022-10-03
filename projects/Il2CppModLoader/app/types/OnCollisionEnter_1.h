#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnCollisionEnter_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OnCollisionEnter_1__Class** type_info;
        inline app::OnCollisionEnter_1__Class* get_class() {
            return il2cpp::get_class<app::OnCollisionEnter_1__Class>(type_info, "UberBehaviourTree.Events", "OnCollisionEnter");
        }
        inline app::OnCollisionEnter_1* create() {
            return il2cpp::create_object<app::OnCollisionEnter_1>(get_class());
        }
    } // namespace OnCollisionEnter_1
} // namespace app::classes::types
