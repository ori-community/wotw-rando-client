#pragma once
#include <Modloader/app/structs/DataRowCreatedEventHandler.h>
#include <Modloader/app/structs/DataRowCreatedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataRowCreatedEventHandler {
        inline app::DataRowCreatedEventHandler__Class** type_info() {
            static app::DataRowCreatedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataRowCreatedEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataRowCreatedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DataRowCreatedEventHandler__Class>(type_info(), "System.Data", "DataRowCreatedEventHandler");
        }
        inline app::DataRowCreatedEventHandler* create() {
            return il2cpp::create_object<app::DataRowCreatedEventHandler>(get_class());
        }
    } // namespace DataRowCreatedEventHandler
} // namespace app::classes::types
