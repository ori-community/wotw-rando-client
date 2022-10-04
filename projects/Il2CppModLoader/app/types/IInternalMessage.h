#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInternalMessage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IInternalMessage__Class** type_info;
        inline app::IInternalMessage__Class* get_class() {
            return il2cpp::get_class<app::IInternalMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "IInternalMessage");
        }
        inline app::IInternalMessage* create() {
            return il2cpp::create_object<app::IInternalMessage>(get_class());
        }
    } // namespace IInternalMessage
} // namespace app::classes::types
