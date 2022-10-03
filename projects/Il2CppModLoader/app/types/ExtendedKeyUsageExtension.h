#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExtendedKeyUsageExtension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExtendedKeyUsageExtension__Class** type_info;
        inline app::ExtendedKeyUsageExtension__Class* get_class() {
            return il2cpp::get_class<app::ExtendedKeyUsageExtension__Class>(type_info, "Mono.Security.X509.Extensions", "ExtendedKeyUsageExtension");
        }
        inline app::ExtendedKeyUsageExtension* create() {
            return il2cpp::create_object<app::ExtendedKeyUsageExtension>(get_class());
        }
    } // namespace ExtendedKeyUsageExtension
} // namespace app::classes::types
