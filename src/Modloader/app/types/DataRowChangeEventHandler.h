#pragma once
#include <Modloader/app/structs/DataRowChangeEventHandler.h>
#include <Modloader/app/structs/DataRowChangeEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataRowChangeEventHandler {
        inline app::DataRowChangeEventHandler__Class** type_info() {
            static app::DataRowChangeEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataRowChangeEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataRowChangeEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DataRowChangeEventHandler__Class>(type_info(), "System.Data", "DataRowChangeEventHandler");
        }
        inline app::DataRowChangeEventHandler* create() {
            return il2cpp::create_object<app::DataRowChangeEventHandler>(get_class());
        }
    } // namespace DataRowChangeEventHandler
} // namespace app::classes::types
