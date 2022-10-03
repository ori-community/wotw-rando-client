#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Input_Command__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Input_Command__Enum__Class** type_info;
        inline app::Input_Command__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Input_Command__Enum__Class>(type_info, "Core", "Input", "Command");
        }
        inline app::Input_Command__Enum* create() {
            return il2cpp::create_object<app::Input_Command__Enum>(get_class());
        }
        inline app::Input_Command__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Input_Command__Enum__Array>(get_class(), size);
        }
    } // namespace Input_Command__Enum
} // namespace app::classes::types
