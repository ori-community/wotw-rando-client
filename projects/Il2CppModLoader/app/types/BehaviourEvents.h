#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourEvents {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BehaviourEvents__Class** type_info;
        inline app::BehaviourEvents__Class* get_class() {
            return il2cpp::get_class<app::BehaviourEvents__Class>(type_info, "UberBehaviourTree", "BehaviourEvents");
        }
        inline app::BehaviourEvents* create() {
            return il2cpp::create_object<app::BehaviourEvents>(get_class());
        }
    } // namespace BehaviourEvents
} // namespace app::classes::types
