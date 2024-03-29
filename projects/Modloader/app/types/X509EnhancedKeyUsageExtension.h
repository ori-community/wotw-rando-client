#pragma once
#include <Modloader/app/structs/X509EnhancedKeyUsageExtension.h>
#include <Modloader/app/structs/X509EnhancedKeyUsageExtension__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509EnhancedKeyUsageExtension {
        inline app::X509EnhancedKeyUsageExtension__Class** type_info() {
            static app::X509EnhancedKeyUsageExtension__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509EnhancedKeyUsageExtension__Class**)(modloader::win::memory::resolve_rva(0x04786158));
            }
            return cache;
        }
        inline app::X509EnhancedKeyUsageExtension__Class* get_class() {
            return il2cpp::get_class<app::X509EnhancedKeyUsageExtension__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509EnhancedKeyUsageExtension");
        }
        inline app::X509EnhancedKeyUsageExtension* create() {
            return il2cpp::create_object<app::X509EnhancedKeyUsageExtension>(get_class());
        }
    } // namespace X509EnhancedKeyUsageExtension
} // namespace app::classes::types
