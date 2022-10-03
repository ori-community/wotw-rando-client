#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompoundAxisInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompoundAxisInput__Class** type_info;
        inline app::CompoundAxisInput__Class* get_class() {
            return il2cpp::get_class<app::CompoundAxisInput__Class>(type_info, "SmartInput", "CompoundAxisInput");
        }
        inline app::CompoundAxisInput* create() {
            return il2cpp::create_object<app::CompoundAxisInput>(get_class());
        }
    } // namespace CompoundAxisInput
} // namespace app::classes::types
