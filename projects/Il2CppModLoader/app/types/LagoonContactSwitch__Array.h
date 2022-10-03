#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LagoonContactSwitch__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LagoonContactSwitch__Array__Class** type_info;
        inline app::LagoonContactSwitch__Array__Class* get_class() {
            return il2cpp::get_class<app::LagoonContactSwitch__Array__Class>(type_info, "", "LagoonContactSwitch[]");
        }
        inline app::LagoonContactSwitch__Array* create() {
            return il2cpp::create_object<app::LagoonContactSwitch__Array>(get_class());
        }
    } // namespace LagoonContactSwitch__Array
} // namespace app::classes::types
