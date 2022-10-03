#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Lease_RenewalDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Lease_RenewalDelegate__Class** type_info;
        inline app::Lease_RenewalDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::Lease_RenewalDelegate__Class>(type_info, "System.Runtime.Remoting.Lifetime", "Lease", "RenewalDelegate");
        }
        inline app::Lease_RenewalDelegate* create() {
            return il2cpp::create_object<app::Lease_RenewalDelegate>(get_class());
        }
    } // namespace Lease_RenewalDelegate
} // namespace app::classes::types
