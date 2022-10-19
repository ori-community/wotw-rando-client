#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceStateMachineContext_Waiter {
        inline app::RaceStateMachineContext_Waiter__Class** type_info = (app::RaceStateMachineContext_Waiter__Class**)(modloader::win::memory::resolve_rva(0x0472E908));
        inline app::RaceStateMachineContext_Waiter__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceStateMachineContext_Waiter__Class>(type_info, "", "RaceStateMachineContext", "Waiter");
        }
        inline app::RaceStateMachineContext_Waiter* create() {
            return il2cpp::create_object<app::RaceStateMachineContext_Waiter>(get_class());
        }
    } // namespace RaceStateMachineContext_Waiter
} // namespace app::classes::types
