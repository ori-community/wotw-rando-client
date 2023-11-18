#pragma once
#include <Modloader/app/structs/DataViewListener__Array.h>
#include <Modloader/app/structs/DataViewListener__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataViewListener__Array {
        inline app::DataViewListener__Array__Class** type_info() {
            static app::DataViewListener__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataViewListener__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataViewListener__Array__Class* get_class() {
            return il2cpp::get_class<app::DataViewListener__Array__Class>(type_info(), "System.Data", "DataViewListener[]");
        }
        inline app::DataViewListener__Array* create() {
            return il2cpp::create_object<app::DataViewListener__Array>(get_class());
        }
    } // namespace DataViewListener__Array
} // namespace app::classes::types
