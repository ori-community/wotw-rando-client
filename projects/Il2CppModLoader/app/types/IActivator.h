#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IActivator {
        inline app::IActivator__Class** type_info = (app::IActivator__Class**)(modloader::win::memory::resolve_rva(0x0470E670));
        inline app::IActivator__Class* get_class() {
            return il2cpp::get_class<app::IActivator__Class>(type_info, "System.Runtime.Remoting.Activation", "IActivator");
        }
    } // namespace IActivator
} // namespace app::classes::types
