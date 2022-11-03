#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExtendedKeyUsageExtension {
        inline app::ExtendedKeyUsageExtension__Class** type_info = (app::ExtendedKeyUsageExtension__Class**)(modloader::win::memory::resolve_rva(0x0471F388));
        inline app::ExtendedKeyUsageExtension__Class* get_class() {
            return il2cpp::get_class<app::ExtendedKeyUsageExtension__Class>(type_info, "Mono.Security.X509.Extensions", "ExtendedKeyUsageExtension");
        }
        inline app::ExtendedKeyUsageExtension* create() {
            return il2cpp::create_object<app::ExtendedKeyUsageExtension>(get_class());
        }
    } // namespace ExtendedKeyUsageExtension
} // namespace app::classes::types
