#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActiveTurtleShells {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActiveTurtleShells__Class** type_info;
        inline app::ActiveTurtleShells__Class* get_class() {
            return il2cpp::get_class<app::ActiveTurtleShells__Class>(type_info, "", "ActiveTurtleShells");
        }
        inline app::ActiveTurtleShells* create() {
            return il2cpp::create_object<app::ActiveTurtleShells>(get_class());
        }
    } // namespace ActiveTurtleShells
} // namespace app::classes::types
