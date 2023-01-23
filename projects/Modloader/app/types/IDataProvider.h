#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDataProvider__Class.h>

namespace app::classes::types {
    namespace IDataProvider {
        inline app::IDataProvider__Class** type_info = (app::IDataProvider__Class**)(modloader::win::memory::resolve_rva(0x04791518));
        inline app::IDataProvider__Class* get_class() {
            return il2cpp::get_class<app::IDataProvider__Class>(type_info, "SystemIntegration.Synchronizer", "IDataProvider");
        }
    } // namespace IDataProvider
} // namespace app::classes::types
