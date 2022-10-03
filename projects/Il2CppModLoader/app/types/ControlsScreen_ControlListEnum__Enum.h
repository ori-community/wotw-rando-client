#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControlsScreen_ControlListEnum__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControlsScreen_ControlListEnum__Enum__Class** type_info;
        inline app::ControlsScreen_ControlListEnum__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlsScreen_ControlListEnum__Enum__Class>(type_info, "", "ControlsScreen", "ControlListEnum");
        }
        inline app::ControlsScreen_ControlListEnum__Enum* create() {
            return il2cpp::create_object<app::ControlsScreen_ControlListEnum__Enum>(get_class());
        }
    } // namespace ControlsScreen_ControlListEnum__Enum
} // namespace app::classes::types
