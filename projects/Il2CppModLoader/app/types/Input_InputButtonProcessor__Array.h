#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Input_InputButtonProcessor__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Input_InputButtonProcessor__Array__Class** type_info;
        inline app::Input_InputButtonProcessor__Array__Class* get_class() {
            return il2cpp::get_class<app::Input_InputButtonProcessor__Array__Class>(type_info, "Core", "Input+InputButtonProcessor[]");
        }
        inline app::Input_InputButtonProcessor__Array* create() {
            return il2cpp::create_object<app::Input_InputButtonProcessor__Array>(get_class());
        }
    } // namespace Input_InputButtonProcessor__Array
} // namespace app::classes::types
