#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServiceNameCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServiceNameCollection__Class** type_info;
        inline app::ServiceNameCollection__Class* get_class() {
            return il2cpp::get_class<app::ServiceNameCollection__Class>(type_info, "System.Security.Authentication.ExtendedProtection", "ServiceNameCollection");
        }
        inline app::ServiceNameCollection* create() {
            return il2cpp::create_object<app::ServiceNameCollection>(get_class());
        }
    } // namespace ServiceNameCollection
} // namespace app::classes::types
