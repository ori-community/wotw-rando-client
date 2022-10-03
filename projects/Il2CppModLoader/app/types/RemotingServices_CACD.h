#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemotingServices_CACD {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemotingServices_CACD__Class** type_info;
        inline app::RemotingServices_CACD__Class* get_class() {
            return il2cpp::get_nested_class<app::RemotingServices_CACD__Class>(type_info, "System.Runtime.Remoting", "RemotingServices", "CACD");
        }
        inline app::RemotingServices_CACD* create() {
            return il2cpp::create_object<app::RemotingServices_CACD>(get_class());
        }
    } // namespace RemotingServices_CACD
} // namespace app::classes::types
