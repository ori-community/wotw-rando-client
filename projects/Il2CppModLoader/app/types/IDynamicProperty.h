#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDynamicProperty {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDynamicProperty__Class** type_info;
        inline app::IDynamicProperty__Class* get_class() {
            return il2cpp::get_class<app::IDynamicProperty__Class>(type_info, "System.Runtime.Remoting.Contexts", "IDynamicProperty");
        }
    } // namespace IDynamicProperty
} // namespace app::classes::types
