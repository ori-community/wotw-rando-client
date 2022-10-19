#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDynamicProperty {
        inline app::IDynamicProperty__Class** type_info = (app::IDynamicProperty__Class**)(modloader::win::memory::resolve_rva(0x047741C0));
        inline app::IDynamicProperty__Class* get_class() {
            return il2cpp::get_class<app::IDynamicProperty__Class>(type_info, "System.Runtime.Remoting.Contexts", "IDynamicProperty");
        }
    } // namespace IDynamicProperty
} // namespace app::classes::types
