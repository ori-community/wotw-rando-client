#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRaceServiceProvider {
        inline app::IRaceServiceProvider__Class** type_info = (app::IRaceServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x0478ACD0));
        inline app::IRaceServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::IRaceServiceProvider__Class>(type_info, "SystemIntegration.Races", "IRaceServiceProvider");
        }
    } // namespace IRaceServiceProvider
} // namespace app::classes::types
