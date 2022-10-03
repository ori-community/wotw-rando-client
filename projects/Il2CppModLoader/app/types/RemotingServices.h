#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemotingServices {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemotingServices__Class** type_info;
        inline app::RemotingServices__Class* get_class() {
            return il2cpp::get_class<app::RemotingServices__Class>(type_info, "System.Runtime.Remoting", "RemotingServices");
        }
        inline app::RemotingServices* create() {
            return il2cpp::create_object<app::RemotingServices>(get_class());
        }
    } // namespace RemotingServices
} // namespace app::classes::types
