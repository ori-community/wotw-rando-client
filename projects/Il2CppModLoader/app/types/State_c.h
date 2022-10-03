#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace State_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::State_c__Class** type_info;
        inline app::State_c__Class* get_class() {
            return il2cpp::get_nested_class<app::State_c__Class>(type_info, "Moon.InteractionGraph", "State", "<>c");
        }
        inline app::State_c* create() {
            return il2cpp::create_object<app::State_c>(get_class());
        }
    } // namespace State_c
} // namespace app::classes::types
