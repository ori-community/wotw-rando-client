#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AppDomainLevelActivator {
        inline app::AppDomainLevelActivator__Class** type_info = (app::AppDomainLevelActivator__Class**)(modloader::win::memory::resolve_rva(0x0474E7B8));
        inline app::AppDomainLevelActivator__Class* get_class() {
            return il2cpp::get_class<app::AppDomainLevelActivator__Class>(type_info, "System.Runtime.Remoting.Activation", "AppDomainLevelActivator");
        }
        inline app::AppDomainLevelActivator* create() {
            return il2cpp::create_object<app::AppDomainLevelActivator>(get_class());
        }
    } // namespace AppDomainLevelActivator
} // namespace app::classes::types
