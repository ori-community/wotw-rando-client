#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IConstructionReturnMessage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IConstructionReturnMessage__Class** type_info;
        inline app::IConstructionReturnMessage__Class* get_class() {
            return il2cpp::get_class<app::IConstructionReturnMessage__Class>(type_info, "System.Runtime.Remoting.Activation", "IConstructionReturnMessage");
        }
    } // namespace IConstructionReturnMessage
} // namespace app::classes::types
