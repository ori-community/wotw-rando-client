#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameStateMachine_State__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameStateMachine_State__Enum__Class** type_info;
        inline app::GameStateMachine_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GameStateMachine_State__Enum__Class>(type_info, "", "GameStateMachine", "State");
        }
        inline app::GameStateMachine_State__Enum* create() {
            return il2cpp::create_object<app::GameStateMachine_State__Enum>(get_class());
        }
    } // namespace GameStateMachine_State__Enum
} // namespace app::classes::types
