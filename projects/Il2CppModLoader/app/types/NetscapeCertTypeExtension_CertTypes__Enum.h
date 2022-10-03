#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NetscapeCertTypeExtension_CertTypes__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NetscapeCertTypeExtension_CertTypes__Enum__Class** type_info;
        inline app::NetscapeCertTypeExtension_CertTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::NetscapeCertTypeExtension_CertTypes__Enum__Class>(type_info, "Mono.Security.X509.Extensions", "NetscapeCertTypeExtension", "CertTypes");
        }
        inline app::NetscapeCertTypeExtension_CertTypes__Enum* create() {
            return il2cpp::create_object<app::NetscapeCertTypeExtension_CertTypes__Enum>(get_class());
        }
    } // namespace NetscapeCertTypeExtension_CertTypes__Enum
} // namespace app::classes::types
