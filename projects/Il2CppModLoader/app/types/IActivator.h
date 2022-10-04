#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IActivator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IActivator__Class** type_info;
        inline app::IActivator__Class* get_class() {
            return il2cpp::get_class<app::IActivator__Class>(type_info, "System.Runtime.Remoting.Activation", "IActivator");
        }
    } // namespace IActivator
} // namespace app::classes::types
