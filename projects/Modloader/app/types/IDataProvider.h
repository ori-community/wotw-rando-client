#pragma once
#include <Modloader/app/structs/IDataProvider.h>
#include <Modloader/app/structs/IDataProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDataProvider {
        inline app::IDataProvider__Class** type_info() {
            static app::IDataProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDataProvider__Class**)(modloader::win::memory::resolve_rva(0x04791518));
            }
            return cache;
        }
        inline app::IDataProvider__Class* get_class() {
            return il2cpp::get_class<app::IDataProvider__Class>(type_info(), "SystemIntegration.Synchronizer", "IDataProvider");
        }
    } // namespace IDataProvider
} // namespace app::classes::types
