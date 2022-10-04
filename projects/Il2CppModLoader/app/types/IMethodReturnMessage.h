#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMethodReturnMessage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMethodReturnMessage__Class** type_info;
        inline app::IMethodReturnMessage__Class* get_class() {
            return il2cpp::get_class<app::IMethodReturnMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "IMethodReturnMessage");
        }
    } // namespace IMethodReturnMessage
} // namespace app::classes::types
