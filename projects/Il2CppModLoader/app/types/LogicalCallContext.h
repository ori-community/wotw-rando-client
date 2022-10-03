#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LogicalCallContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LogicalCallContext__Class** type_info;
        inline app::LogicalCallContext__Class* get_class() {
            return il2cpp::get_class<app::LogicalCallContext__Class>(type_info, "System.Runtime.Remoting.Messaging", "LogicalCallContext");
        }
        inline app::LogicalCallContext* create() {
            return il2cpp::create_object<app::LogicalCallContext>(get_class());
        }
    } // namespace LogicalCallContext
} // namespace app::classes::types
