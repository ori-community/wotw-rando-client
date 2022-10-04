#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IContainer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IContainer__Class** type_info;
        inline app::IContainer__Class* get_class() {
            return il2cpp::get_class<app::IContainer__Class>(type_info, "System.ComponentModel", "IContainer");
        }
    } // namespace IContainer
} // namespace app::classes::types
