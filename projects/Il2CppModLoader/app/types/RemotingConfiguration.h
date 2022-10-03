#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemotingConfiguration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemotingConfiguration__Class** type_info;
        inline app::RemotingConfiguration__Class* get_class() {
            return il2cpp::get_class<app::RemotingConfiguration__Class>(type_info, "System.Runtime.Remoting", "RemotingConfiguration");
        }
        inline app::RemotingConfiguration* create() {
            return il2cpp::create_object<app::RemotingConfiguration>(get_class());
        }
    } // namespace RemotingConfiguration
} // namespace app::classes::types
