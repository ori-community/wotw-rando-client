#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PKCS12_DeriveBytes_Purpose__Enum__Class.h>
#include <Modloader/app/structs/PKCS12_DeriveBytes_Purpose__Enum.h>

namespace app::classes::types {
    namespace PKCS12_DeriveBytes_Purpose__Enum {
        namespace {
            inline app::PKCS12_DeriveBytes_Purpose__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PKCS12_DeriveBytes_Purpose__Enum__Class** type_info = &type_info_ref;
        inline app::PKCS12_DeriveBytes_Purpose__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS12_DeriveBytes_Purpose__Enum__Class>(type_info, "Mono.Security.X509", "PKCS12+DeriveBytes", "Purpose");
        }
        inline app::PKCS12_DeriveBytes_Purpose__Enum* create() {
            return il2cpp::create_object<app::PKCS12_DeriveBytes_Purpose__Enum>(get_class());
        }
    } // namespace PKCS12_DeriveBytes_Purpose__Enum
} // namespace app::classes::types
