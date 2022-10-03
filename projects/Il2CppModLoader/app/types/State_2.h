#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace State_2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::State_2__Class** type_info;
        inline app::State_2__Class* get_class() {
            return il2cpp::get_class<app::State_2__Class>(type_info, "fsm", "State");
        }
        inline app::State_2* create() {
            return il2cpp::create_object<app::State_2>(get_class());
        }
    } // namespace State_2
} // namespace app::classes::types
