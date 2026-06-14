#pragma once
#include <Modloader/app/structs/SystemIntegrationMainThreadRunner.h>
#include <Modloader/app/structs/SystemIntegrationMainThreadRunner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SystemIntegrationMainThreadRunner {
        inline app::SystemIntegrationMainThreadRunner__Class** type_info() {
            static app::SystemIntegrationMainThreadRunner__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SystemIntegrationMainThreadRunner__Class**)(modloader::win::memory::resolve_rva(0x047274B0));
            }
            return cache;
        }
        inline app::SystemIntegrationMainThreadRunner__Class* get_class() {
            return il2cpp::get_class<app::SystemIntegrationMainThreadRunner__Class>(type_info(), "SystemIntegration", "SystemIntegrationMainThreadRunner");
        }
        inline app::SystemIntegrationMainThreadRunner* create() {
            return il2cpp::create_object<app::SystemIntegrationMainThreadRunner>(get_class());
        }
    } // namespace SystemIntegrationMainThreadRunner
} // namespace app::classes::types
