#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMethodMessage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMethodMessage__Class** type_info;
        inline app::IMethodMessage__Class* get_class() {
            return il2cpp::get_class<app::IMethodMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "IMethodMessage");
        }
        inline app::IMethodMessage* create() {
            return il2cpp::create_object<app::IMethodMessage>(get_class());
        }
    } // namespace IMethodMessage
} // namespace app::classes::types
