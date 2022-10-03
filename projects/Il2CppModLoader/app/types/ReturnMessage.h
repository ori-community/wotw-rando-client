#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReturnMessage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReturnMessage__Class** type_info;
        inline app::ReturnMessage__Class* get_class() {
            return il2cpp::get_class<app::ReturnMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "ReturnMessage");
        }
        inline app::ReturnMessage* create() {
            return il2cpp::create_object<app::ReturnMessage>(get_class());
        }
    } // namespace ReturnMessage
} // namespace app::classes::types
