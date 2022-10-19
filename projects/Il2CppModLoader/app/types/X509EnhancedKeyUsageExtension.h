#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509EnhancedKeyUsageExtension {
        inline app::X509EnhancedKeyUsageExtension__Class** type_info = (app::X509EnhancedKeyUsageExtension__Class**)(modloader::win::memory::resolve_rva(0x04786158));
        inline app::X509EnhancedKeyUsageExtension__Class* get_class() {
            return il2cpp::get_class<app::X509EnhancedKeyUsageExtension__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509EnhancedKeyUsageExtension");
        }
        inline app::X509EnhancedKeyUsageExtension* create() {
            return il2cpp::create_object<app::X509EnhancedKeyUsageExtension>(get_class());
        }
    } // namespace X509EnhancedKeyUsageExtension
} // namespace app::classes::types
