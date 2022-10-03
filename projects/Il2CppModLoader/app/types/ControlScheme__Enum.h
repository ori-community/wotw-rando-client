#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControlScheme__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControlScheme__Enum__Class** type_info;
        inline app::ControlScheme__Enum__Class* get_class() {
            return il2cpp::get_class<app::ControlScheme__Enum__Class>(type_info, "", "ControlScheme");
        }
        inline app::ControlScheme__Enum* create() {
            return il2cpp::create_object<app::ControlScheme__Enum>(get_class());
        }
    } // namespace ControlScheme__Enum
} // namespace app::classes::types
