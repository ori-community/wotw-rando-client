#pragma once
#include <Modloader/app/structs/PKCS12_DeriveBytes_Purpose__Enum.h>
#include <Modloader/app/structs/PKCS12_DeriveBytes_Purpose__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS12_DeriveBytes_Purpose__Enum {
        inline app::PKCS12_DeriveBytes_Purpose__Enum__Class** type_info() {
            static app::PKCS12_DeriveBytes_Purpose__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PKCS12_DeriveBytes_Purpose__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PKCS12_DeriveBytes_Purpose__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS12_DeriveBytes_Purpose__Enum__Class>(type_info(), "Mono.Security.X509", "PKCS12+DeriveBytes", "Purpose");
        }
        inline app::PKCS12_DeriveBytes_Purpose__Enum* create() {
            return il2cpp::create_object<app::PKCS12_DeriveBytes_Purpose__Enum>(get_class());
        }
    } // namespace PKCS12_DeriveBytes_Purpose__Enum
} // namespace app::classes::types
