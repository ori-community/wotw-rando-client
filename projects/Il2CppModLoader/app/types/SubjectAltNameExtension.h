#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubjectAltNameExtension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SubjectAltNameExtension__Class** type_info;
        inline app::SubjectAltNameExtension__Class* get_class() {
            return il2cpp::get_class<app::SubjectAltNameExtension__Class>(type_info, "Mono.Security.X509.Extensions", "SubjectAltNameExtension");
        }
        inline app::SubjectAltNameExtension* create() {
            return il2cpp::create_object<app::SubjectAltNameExtension>(get_class());
        }
    } // namespace SubjectAltNameExtension
} // namespace app::classes::types
