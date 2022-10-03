#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodCall {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodCall__Class** type_info;
        inline app::MethodCall__Class* get_class() {
            return il2cpp::get_class<app::MethodCall__Class>(type_info, "System.Runtime.Remoting.Messaging", "MethodCall");
        }
        inline app::MethodCall* create() {
            return il2cpp::create_object<app::MethodCall>(get_class());
        }
    } // namespace MethodCall
} // namespace app::classes::types
