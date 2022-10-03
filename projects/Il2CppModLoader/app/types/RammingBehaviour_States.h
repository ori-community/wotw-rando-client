#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingBehaviour_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingBehaviour_States__Class** type_info;
        inline app::RammingBehaviour_States__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_States__Class>(type_info, "Moon", "RammingBehaviour", "States");
        }
        inline app::RammingBehaviour_States* create() {
            return il2cpp::create_object<app::RammingBehaviour_States>(get_class());
        }
    } // namespace RammingBehaviour_States
} // namespace app::classes::types
