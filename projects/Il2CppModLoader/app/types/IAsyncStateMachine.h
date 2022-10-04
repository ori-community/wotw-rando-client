#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAsyncStateMachine {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAsyncStateMachine__Class** type_info;
        inline app::IAsyncStateMachine__Class* get_class() {
            return il2cpp::get_class<app::IAsyncStateMachine__Class>(type_info, "System.Runtime.CompilerServices", "IAsyncStateMachine");
        }
        inline app::IAsyncStateMachine* create() {
            return il2cpp::create_object<app::IAsyncStateMachine>(get_class());
        }
    } // namespace IAsyncStateMachine
} // namespace app::classes::types
