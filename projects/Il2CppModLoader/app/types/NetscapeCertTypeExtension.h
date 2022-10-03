#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NetscapeCertTypeExtension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NetscapeCertTypeExtension__Class** type_info;
        inline app::NetscapeCertTypeExtension__Class* get_class() {
            return il2cpp::get_class<app::NetscapeCertTypeExtension__Class>(type_info, "Mono.Security.X509.Extensions", "NetscapeCertTypeExtension");
        }
        inline app::NetscapeCertTypeExtension* create() {
            return il2cpp::create_object<app::NetscapeCertTypeExtension>(get_class());
        }
    } // namespace NetscapeCertTypeExtension
} // namespace app::classes::types
