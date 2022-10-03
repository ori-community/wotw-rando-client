#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryCrossAppDomainAssembly {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryCrossAppDomainAssembly__Class** type_info;
        inline app::BinaryCrossAppDomainAssembly__Class* get_class() {
            return il2cpp::get_class<app::BinaryCrossAppDomainAssembly__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainAssembly");
        }
        inline app::BinaryCrossAppDomainAssembly* create() {
            return il2cpp::create_object<app::BinaryCrossAppDomainAssembly>(get_class());
        }
    } // namespace BinaryCrossAppDomainAssembly
} // namespace app::classes::types
