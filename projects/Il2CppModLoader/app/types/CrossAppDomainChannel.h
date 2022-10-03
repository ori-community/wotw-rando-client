#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CrossAppDomainChannel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CrossAppDomainChannel__Class** type_info;
        inline app::CrossAppDomainChannel__Class* get_class() {
            return il2cpp::get_class<app::CrossAppDomainChannel__Class>(type_info, "System.Runtime.Remoting.Channels", "CrossAppDomainChannel");
        }
        inline app::CrossAppDomainChannel* create() {
            return il2cpp::create_object<app::CrossAppDomainChannel>(get_class());
        }
    } // namespace CrossAppDomainChannel
} // namespace app::classes::types
