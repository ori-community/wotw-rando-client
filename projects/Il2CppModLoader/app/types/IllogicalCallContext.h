#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IllogicalCallContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IllogicalCallContext__Class** type_info;
        inline app::IllogicalCallContext__Class* get_class() {
            return il2cpp::get_class<app::IllogicalCallContext__Class>(type_info, "System.Runtime.Remoting.Messaging", "IllogicalCallContext");
        }
        inline app::IllogicalCallContext* create() {
            return il2cpp::create_object<app::IllogicalCallContext>(get_class());
        }
    } // namespace IllogicalCallContext
} // namespace app::classes::types
