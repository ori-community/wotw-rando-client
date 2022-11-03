#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformServiceProvider {
        inline app::PlatformServiceProvider__Class** type_info = (app::PlatformServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x04771B20));
        inline app::PlatformServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::PlatformServiceProvider__Class>(type_info, "SystemIntegration", "PlatformServiceProvider");
        }
        inline app::PlatformServiceProvider* create() {
            return il2cpp::create_object<app::PlatformServiceProvider>(get_class());
        }
    } // namespace PlatformServiceProvider
} // namespace app::classes::types
