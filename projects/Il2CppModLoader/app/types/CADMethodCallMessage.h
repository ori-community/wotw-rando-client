#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CADMethodCallMessage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CADMethodCallMessage__Class** type_info;
        inline app::CADMethodCallMessage__Class* get_class() {
            return il2cpp::get_class<app::CADMethodCallMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "CADMethodCallMessage");
        }
        inline app::CADMethodCallMessage* create() {
            return il2cpp::create_object<app::CADMethodCallMessage>(get_class());
        }
    } // namespace CADMethodCallMessage
} // namespace app::classes::types
