#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IState_2__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IState_2__Array__Class** type_info;
        inline app::IState_2__Array__Class* get_class() {
            return il2cpp::get_class<app::IState_2__Array__Class>(type_info, "fsm", "IState[]");
        }
        inline app::IState_2__Array* create() {
            return il2cpp::create_object<app::IState_2__Array>(get_class());
        }
    } // namespace IState_2__Array
} // namespace app::classes::types
