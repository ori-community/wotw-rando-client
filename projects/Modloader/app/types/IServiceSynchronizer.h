#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IServiceSynchronizer__Class.h>

namespace app::classes::types {
    namespace IServiceSynchronizer {
        inline app::IServiceSynchronizer__Class** type_info = (app::IServiceSynchronizer__Class**)(modloader::win::memory::resolve_rva(0x04727338));
        inline app::IServiceSynchronizer__Class* get_class() {
            return il2cpp::get_class<app::IServiceSynchronizer__Class>(type_info, "SystemIntegration.Synchronizer", "IServiceSynchronizer");
        }
    } // namespace IServiceSynchronizer
} // namespace app::classes::types
