#pragma once
#include <Modloader/app/structs/DataTableClearEventHandler.h>
#include <Modloader/app/structs/DataTableClearEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataTableClearEventHandler {
        inline app::DataTableClearEventHandler__Class** type_info() {
            static app::DataTableClearEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataTableClearEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataTableClearEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DataTableClearEventHandler__Class>(type_info(), "System.Data", "DataTableClearEventHandler");
        }
        inline app::DataTableClearEventHandler* create() {
            return il2cpp::create_object<app::DataTableClearEventHandler>(get_class());
        }
    } // namespace DataTableClearEventHandler
} // namespace app::classes::types
