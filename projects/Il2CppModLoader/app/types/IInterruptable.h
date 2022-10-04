#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInterruptable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IInterruptable__Class** type_info;
        inline app::IInterruptable__Class* get_class() {
            return il2cpp::get_class<app::IInterruptable__Class>(type_info, "Moon.FSM", "IInterruptable");
        }
        inline app::IInterruptable* create() {
            return il2cpp::create_object<app::IInterruptable>(get_class());
        }
    } // namespace IInterruptable
} // namespace app::classes::types
