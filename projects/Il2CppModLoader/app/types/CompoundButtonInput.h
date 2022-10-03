#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompoundButtonInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompoundButtonInput__Class** type_info;
        inline app::CompoundButtonInput__Class* get_class() {
            return il2cpp::get_class<app::CompoundButtonInput__Class>(type_info, "SmartInput", "CompoundButtonInput");
        }
        inline app::CompoundButtonInput* create() {
            return il2cpp::create_object<app::CompoundButtonInput>(get_class());
        }
    } // namespace CompoundButtonInput
} // namespace app::classes::types
