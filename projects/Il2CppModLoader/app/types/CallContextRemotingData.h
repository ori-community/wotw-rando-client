#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallContextRemotingData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CallContextRemotingData__Class** type_info;
        inline app::CallContextRemotingData__Class* get_class() {
            return il2cpp::get_class<app::CallContextRemotingData__Class>(type_info, "System.Runtime.Remoting.Messaging", "CallContextRemotingData");
        }
        inline app::CallContextRemotingData* create() {
            return il2cpp::create_object<app::CallContextRemotingData>(get_class());
        }
    } // namespace CallContextRemotingData
} // namespace app::classes::types
