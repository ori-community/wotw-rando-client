#pragma once
#include <Modloader/app/structs/Lease_RenewalDelegate.h>
#include <Modloader/app/structs/Lease_RenewalDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Lease_RenewalDelegate {
        inline app::Lease_RenewalDelegate__Class** type_info() {
            static app::Lease_RenewalDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Lease_RenewalDelegate__Class**)(modloader::win::memory::resolve_rva(0x04776E68));
            }
            return cache;
        }
        inline app::Lease_RenewalDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::Lease_RenewalDelegate__Class>(type_info(), "System.Runtime.Remoting.Lifetime", "Lease", "RenewalDelegate");
        }
        inline app::Lease_RenewalDelegate* create() {
            return il2cpp::create_object<app::Lease_RenewalDelegate>(get_class());
        }
    } // namespace Lease_RenewalDelegate
} // namespace app::classes::types
