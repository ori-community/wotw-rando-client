#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BinaryCrossAppDomainString {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BinaryCrossAppDomainString__Class** type_info;
        inline app::BinaryCrossAppDomainString__Class* get_class() {
            return il2cpp::get_class<app::BinaryCrossAppDomainString__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryCrossAppDomainString");
        }
        inline app::BinaryCrossAppDomainString* create() {
            return il2cpp::create_object<app::BinaryCrossAppDomainString>(get_class());
        }
    } // namespace BinaryCrossAppDomainString
} // namespace app::classes::types
