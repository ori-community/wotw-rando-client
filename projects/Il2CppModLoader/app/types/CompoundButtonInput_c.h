#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompoundButtonInput_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompoundButtonInput_c__Class** type_info;
        inline app::CompoundButtonInput_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CompoundButtonInput_c__Class>(type_info, "SmartInput", "CompoundButtonInput", "<>c");
        }
        inline app::CompoundButtonInput_c* create() {
            return il2cpp::create_object<app::CompoundButtonInput_c>(get_class());
        }
    } // namespace CompoundButtonInput_c
} // namespace app::classes::types
