#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IState__Class** type_info;
        inline app::IState__Class* get_class() {
            return il2cpp::get_class<app::IState__Class>(type_info, "Moon.FSM", "IState");
        }
        inline app::IState* create() {
            return il2cpp::create_object<app::IState>(get_class());
        }
    } // namespace IState
} // namespace app::classes::types
