#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceStateMachineContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceStateMachineContext__Class** type_info;
        inline app::RaceStateMachineContext__Class* get_class() {
            return il2cpp::get_class<app::RaceStateMachineContext__Class>(type_info, "", "RaceStateMachineContext");
        }
        inline app::RaceStateMachineContext* create() {
            return il2cpp::create_object<app::RaceStateMachineContext>(get_class());
        }
    } // namespace RaceStateMachineContext
} // namespace app::classes::types
