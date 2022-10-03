#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IButtonInput__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IButtonInput__Array__Class** type_info;
        inline app::IButtonInput__Array__Class* get_class() {
            return il2cpp::get_class<app::IButtonInput__Array__Class>(type_info, "SmartInput", "IButtonInput[]");
        }
        inline app::IButtonInput__Array* create() {
            return il2cpp::create_object<app::IButtonInput__Array>(get_class());
        }
    } // namespace IButtonInput__Array
} // namespace app::classes::types
