#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompoundState_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompoundState_c__Class** type_info;
        inline app::CompoundState_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CompoundState_c__Class>(type_info, "Moon.InteractionGraph", "CompoundState", "<>c");
        }
        inline app::CompoundState_c* create() {
            return il2cpp::create_object<app::CompoundState_c>(get_class());
        }
    } // namespace CompoundState_c
} // namespace app::classes::types
