#pragma once
#include <Modloader/app/structs/PlatformServiceProvider.h>
#include <Modloader/app/structs/PlatformServiceProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformServiceProvider {
        inline app::PlatformServiceProvider__Class** type_info() {
            static app::PlatformServiceProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlatformServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x04771B20));
            }
            return cache;
        }
        inline app::PlatformServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::PlatformServiceProvider__Class>(type_info(), "SystemIntegration", "PlatformServiceProvider");
        }
        inline app::PlatformServiceProvider* create() {
            return il2cpp::create_object<app::PlatformServiceProvider>(get_class());
        }
    } // namespace PlatformServiceProvider
} // namespace app::classes::types
