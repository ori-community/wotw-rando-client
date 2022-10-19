#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryCrossAppDomainAssembly {
        inline app::BinaryCrossAppDomainAssembly__Class** type_info = (app::BinaryCrossAppDomainAssembly__Class**)(modloader::win::memory::resolve_rva(0x04783058));
        inline app::BinaryCrossAppDomainAssembly__Class* get_class() {
            return il2cpp::get_class<app::BinaryCrossAppDomainAssembly__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainAssembly");
        }
        inline app::BinaryCrossAppDomainAssembly* create() {
            return il2cpp::create_object<app::BinaryCrossAppDomainAssembly>(get_class());
        }
    } // namespace BinaryCrossAppDomainAssembly
} // namespace app::classes::types
