#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ErrorMessage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ErrorMessage__Class** type_info;
        inline app::ErrorMessage__Class* get_class() {
            return il2cpp::get_class<app::ErrorMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "ErrorMessage");
        }
        inline app::ErrorMessage* create() {
            return il2cpp::create_object<app::ErrorMessage>(get_class());
        }
    } // namespace ErrorMessage
} // namespace app::classes::types
