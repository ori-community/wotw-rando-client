#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMethodCallMessage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMethodCallMessage__Class** type_info;
        inline app::IMethodCallMessage__Class* get_class() {
            return il2cpp::get_class<app::IMethodCallMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "IMethodCallMessage");
        }
        inline app::IMethodCallMessage* create() {
            return il2cpp::create_object<app::IMethodCallMessage>(get_class());
        }
    } // namespace IMethodCallMessage
} // namespace app::classes::types
