#pragma once
#include <Modloader/app/structs/DataViewManager.h>
#include <Modloader/app/structs/DataViewManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataViewManager {
        inline app::DataViewManager__Class** type_info() {
            static app::DataViewManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataViewManager__Class**)(modloader::win::memory::resolve_rva(0x0473CDC0));
            }
            return cache;
        }
        inline app::DataViewManager__Class* get_class() {
            return il2cpp::get_class<app::DataViewManager__Class>(type_info(), "System.Data", "DataViewManager");
        }
        inline app::DataViewManager* create() {
            return il2cpp::create_object<app::DataViewManager>(get_class());
        }
    } // namespace DataViewManager
} // namespace app::classes::types
