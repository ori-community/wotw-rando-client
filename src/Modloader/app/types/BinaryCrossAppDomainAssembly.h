#pragma once
#include <Modloader/app/structs/BinaryCrossAppDomainAssembly.h>
#include <Modloader/app/structs/BinaryCrossAppDomainAssembly__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinaryCrossAppDomainAssembly {
        inline app::BinaryCrossAppDomainAssembly__Class** type_info() {
            static app::BinaryCrossAppDomainAssembly__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BinaryCrossAppDomainAssembly__Class**)(modloader::win::memory::resolve_rva(0x04783058));
            }
            return cache;
        }
        inline app::BinaryCrossAppDomainAssembly__Class* get_class() {
            return il2cpp::get_class<app::BinaryCrossAppDomainAssembly__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainAssembly");
        }
        inline app::BinaryCrossAppDomainAssembly* create() {
            return il2cpp::create_object<app::BinaryCrossAppDomainAssembly>(get_class());
        }
    } // namespace BinaryCrossAppDomainAssembly
} // namespace app::classes::types
