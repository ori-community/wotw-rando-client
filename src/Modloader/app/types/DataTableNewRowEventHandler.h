#pragma once
#include <Modloader/app/structs/DataTableNewRowEventHandler.h>
#include <Modloader/app/structs/DataTableNewRowEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataTableNewRowEventHandler {
        inline app::DataTableNewRowEventHandler__Class** type_info() {
            static app::DataTableNewRowEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataTableNewRowEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataTableNewRowEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DataTableNewRowEventHandler__Class>(type_info(), "System.Data", "DataTableNewRowEventHandler");
        }
        inline app::DataTableNewRowEventHandler* create() {
            return il2cpp::create_object<app::DataTableNewRowEventHandler>(get_class());
        }
    } // namespace DataTableNewRowEventHandler
} // namespace app::classes::types
