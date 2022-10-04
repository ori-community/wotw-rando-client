#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IButtonInput {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IButtonInput__Class** type_info;
        inline app::IButtonInput__Class* get_class() {
            return il2cpp::get_class<app::IButtonInput__Class>(type_info, "SmartInput", "IButtonInput");
        }
        inline app::IButtonInput__Array* create_array(int size) {
            return il2cpp::array_new<app::IButtonInput__Array>(get_class(), size);
        }
    } // namespace IButtonInput
} // namespace app::classes::types
