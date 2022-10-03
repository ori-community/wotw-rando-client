#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ASN1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ASN1__Class** type_info;
        inline app::ASN1__Class* get_class() {
            return il2cpp::get_class<app::ASN1__Class>(type_info, "Mono.Security", "ASN1");
        }
        inline app::ASN1* create() {
            return il2cpp::create_object<app::ASN1>(get_class());
        }
    } // namespace ASN1
} // namespace app::classes::types
