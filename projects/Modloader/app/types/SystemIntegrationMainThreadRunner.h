#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SystemIntegrationMainThreadRunner__Class.h>
#include <Modloader/app/structs/SystemIntegrationMainThreadRunner.h>

namespace app::classes::types {
    namespace SystemIntegrationMainThreadRunner {
        inline app::SystemIntegrationMainThreadRunner__Class** type_info = (app::SystemIntegrationMainThreadRunner__Class**)(modloader::win::memory::resolve_rva(0x047274B0));
        inline app::SystemIntegrationMainThreadRunner__Class* get_class() {
            return il2cpp::get_class<app::SystemIntegrationMainThreadRunner__Class>(type_info, "SystemIntegration", "SystemIntegrationMainThreadRunner");
        }
        inline app::SystemIntegrationMainThreadRunner* create() {
            return il2cpp::create_object<app::SystemIntegrationMainThreadRunner>(get_class());
        }
    } // namespace SystemIntegrationMainThreadRunner
} // namespace app::classes::types
