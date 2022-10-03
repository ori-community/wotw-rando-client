#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PKCS12_DeriveBytes_Purpose__Enum {
        namespace {
            app::PKCS12_DeriveBytes_Purpose__Enum__Class* type_info_ref = nullptr;
        }
        app::PKCS12_DeriveBytes_Purpose__Enum__Class** type_info = &type_info_ref;
        inline app::PKCS12_DeriveBytes_Purpose__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS12_DeriveBytes_Purpose__Enum__Class>(type_info, "Mono.Security.X509", "PKCS12+DeriveBytes", "Purpose");
        }
        inline app::PKCS12_DeriveBytes_Purpose__Enum* create() {
            return il2cpp::create_object<app::PKCS12_DeriveBytes_Purpose__Enum>(get_class());
        }
    } // namespace PKCS12_DeriveBytes_Purpose__Enum
} // namespace app::classes::types
