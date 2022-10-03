#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalRemotingServices {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalRemotingServices__Class** type_info;
        inline app::InternalRemotingServices__Class* get_class() {
            return il2cpp::get_class<app::InternalRemotingServices__Class>(type_info, "System.Runtime.Remoting", "InternalRemotingServices");
        }
        inline app::InternalRemotingServices* create() {
            return il2cpp::create_object<app::InternalRemotingServices>(get_class());
        }
    } // namespace InternalRemotingServices
} // namespace app::classes::types
