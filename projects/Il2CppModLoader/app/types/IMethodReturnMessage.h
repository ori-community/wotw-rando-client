#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMethodReturnMessage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMethodReturnMessage__Class** type_info;
        inline app::IMethodReturnMessage__Class* get_class() {
            return il2cpp::get_class<app::IMethodReturnMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "IMethodReturnMessage");
        }
        inline app::IMethodReturnMessage* create() {
            return il2cpp::create_object<app::IMethodReturnMessage>(get_class());
        }
    } // namespace IMethodReturnMessage
} // namespace app::classes::types
