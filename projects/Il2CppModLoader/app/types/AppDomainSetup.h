#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AppDomainSetup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AppDomainSetup__Class** type_info;
        inline app::AppDomainSetup__Class* get_class() {
            return il2cpp::get_class<app::AppDomainSetup__Class>(type_info, "System", "AppDomainSetup");
        }
        inline app::AppDomainSetup* create() {
            return il2cpp::create_object<app::AppDomainSetup>(get_class());
        }
    } // namespace AppDomainSetup
} // namespace app::classes::types
