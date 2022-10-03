#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BasicConstraintsExtension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BasicConstraintsExtension__Class** type_info;
        inline app::BasicConstraintsExtension__Class* get_class() {
            return il2cpp::get_class<app::BasicConstraintsExtension__Class>(type_info, "Mono.Security.X509.Extensions", "BasicConstraintsExtension");
        }
        inline app::BasicConstraintsExtension* create() {
            return il2cpp::create_object<app::BasicConstraintsExtension>(get_class());
        }
    } // namespace BasicConstraintsExtension
} // namespace app::classes::types
