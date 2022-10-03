#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourStatus__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BehaviourStatus__Enum__Class** type_info;
        inline app::BehaviourStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::BehaviourStatus__Enum__Class>(type_info, "Moon.BehaviourSystem", "BehaviourStatus");
        }
        inline app::BehaviourStatus__Enum* create() {
            return il2cpp::create_object<app::BehaviourStatus__Enum>(get_class());
        }
    } // namespace BehaviourStatus__Enum
} // namespace app::classes::types
