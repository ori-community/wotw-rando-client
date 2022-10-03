#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AppDomainLevelActivator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AppDomainLevelActivator__Class** type_info;
        inline app::AppDomainLevelActivator__Class* get_class() {
            return il2cpp::get_class<app::AppDomainLevelActivator__Class>(type_info, "System.Runtime.Remoting.Activation", "AppDomainLevelActivator");
        }
        inline app::AppDomainLevelActivator* create() {
            return il2cpp::create_object<app::AppDomainLevelActivator>(get_class());
        }
    } // namespace AppDomainLevelActivator
} // namespace app::classes::types
