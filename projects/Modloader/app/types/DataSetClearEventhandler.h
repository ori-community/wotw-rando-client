#pragma once
#include <Modloader/app/structs/DataSetClearEventhandler.h>
#include <Modloader/app/structs/DataSetClearEventhandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataSetClearEventhandler {
        inline app::DataSetClearEventhandler__Class** type_info() {
            static app::DataSetClearEventhandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataSetClearEventhandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataSetClearEventhandler__Class* get_class() {
            return il2cpp::get_class<app::DataSetClearEventhandler__Class>(type_info(), "System.Data", "DataSetClearEventhandler");
        }
        inline app::DataSetClearEventhandler* create() {
            return il2cpp::create_object<app::DataSetClearEventhandler>(get_class());
        }
    } // namespace DataSetClearEventhandler
} // namespace app::classes::types
