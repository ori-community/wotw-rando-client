#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509KeyUsageExtension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509KeyUsageExtension__Class** type_info;
        inline app::X509KeyUsageExtension__Class* get_class() {
            return il2cpp::get_class<app::X509KeyUsageExtension__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension");
        }
        inline app::X509KeyUsageExtension* create() {
            return il2cpp::create_object<app::X509KeyUsageExtension>(get_class());
        }
    } // namespace X509KeyUsageExtension
} // namespace app::classes::types
