#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509KeyUsageExtension {
        inline app::X509KeyUsageExtension__Class** type_info = (app::X509KeyUsageExtension__Class**)(modloader::win::memory::resolve_rva(0x047543D0));
        inline app::X509KeyUsageExtension__Class* get_class() {
            return il2cpp::get_class<app::X509KeyUsageExtension__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension");
        }
        inline app::X509KeyUsageExtension* create() {
            return il2cpp::create_object<app::X509KeyUsageExtension>(get_class());
        }
    } // namespace X509KeyUsageExtension
} // namespace app::classes::types
