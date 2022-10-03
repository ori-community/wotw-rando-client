#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodResponse__Class** type_info;
        inline app::MethodResponse__Class* get_class() {
            return il2cpp::get_class<app::MethodResponse__Class>(type_info, "System.Runtime.Remoting.Messaging", "MethodResponse");
        }
        inline app::MethodResponse* create() {
            return il2cpp::create_object<app::MethodResponse>(get_class());
        }
    } // namespace MethodResponse
} // namespace app::classes::types
