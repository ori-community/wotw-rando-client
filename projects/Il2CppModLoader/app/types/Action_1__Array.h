#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Action_1__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Action_1__Array__Class** type_info;
        inline app::Action_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Action_1__Array__Class>(type_info, "Moon.BehaviourSystem", "Action[]");
        }
        inline app::Action_1__Array* create() {
            return il2cpp::create_object<app::Action_1__Array>(get_class());
        }
    } // namespace Action_1__Array
} // namespace app::classes::types
