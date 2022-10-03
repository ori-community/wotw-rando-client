#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallContextSecurityData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CallContextSecurityData__Class** type_info;
        inline app::CallContextSecurityData__Class* get_class() {
            return il2cpp::get_class<app::CallContextSecurityData__Class>(type_info, "System.Runtime.Remoting.Messaging", "CallContextSecurityData");
        }
        inline app::CallContextSecurityData* create() {
            return il2cpp::create_object<app::CallContextSecurityData>(get_class());
        }
    } // namespace CallContextSecurityData
} // namespace app::classes::types
