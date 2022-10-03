#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameStateMachine {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameStateMachine__Class** type_info;
        inline app::GameStateMachine__Class* get_class() {
            return il2cpp::get_class<app::GameStateMachine__Class>(type_info, "", "GameStateMachine");
        }
        inline app::GameStateMachine* create() {
            return il2cpp::create_object<app::GameStateMachine>(get_class());
        }
    } // namespace GameStateMachine
} // namespace app::classes::types
