#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryCrossAppDomainMap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryCrossAppDomainMap__Class** type_info;
        inline app::BinaryCrossAppDomainMap__Class* get_class() {
            return il2cpp::get_class<app::BinaryCrossAppDomainMap__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainMap");
        }
        inline app::BinaryCrossAppDomainMap* create() {
            return il2cpp::create_object<app::BinaryCrossAppDomainMap>(get_class());
        }
    } // namespace BinaryCrossAppDomainMap
} // namespace app::classes::types
