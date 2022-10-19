#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CallContextSecurityData {
        inline app::CallContextSecurityData__Class** type_info = (app::CallContextSecurityData__Class**)(modloader::win::memory::resolve_rva(0x0476AA18));
        inline app::CallContextSecurityData__Class* get_class() {
            return il2cpp::get_class<app::CallContextSecurityData__Class>(type_info, "System.Runtime.Remoting.Messaging", "CallContextSecurityData");
        }
        inline app::CallContextSecurityData* create() {
            return il2cpp::create_object<app::CallContextSecurityData>(get_class());
        }
    } // namespace CallContextSecurityData
} // namespace app::classes::types
