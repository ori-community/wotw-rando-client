#pragma once
#include <Modloader/app/structs/DataProvider.h>
#include <Modloader/app/structs/DataProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataProvider {
        inline app::DataProvider__Class** type_info() {
            static app::DataProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataProvider__Class**)(modloader::win::memory::resolve_rva(0x047972C0));
            }
            return cache;
        }
        inline app::DataProvider__Class* get_class() {
            return il2cpp::get_class<app::DataProvider__Class>(type_info(), "SystemIntegration.Synchronizer", "DataProvider");
        }
        inline app::DataProvider* create() {
            return il2cpp::create_object<app::DataProvider>(get_class());
        }
    } // namespace DataProvider
} // namespace app::classes::types
