#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CADMethodReturnMessage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CADMethodReturnMessage__Class** type_info;
        inline app::CADMethodReturnMessage__Class* get_class() {
            return il2cpp::get_class<app::CADMethodReturnMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "CADMethodReturnMessage");
        }
        inline app::CADMethodReturnMessage* create() {
            return il2cpp::create_object<app::CADMethodReturnMessage>(get_class());
        }
    } // namespace CADMethodReturnMessage
} // namespace app::classes::types
