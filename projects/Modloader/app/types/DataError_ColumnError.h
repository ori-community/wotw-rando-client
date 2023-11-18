#pragma once
#include <Modloader/app/structs/DataError_ColumnError.h>
#include <Modloader/app/structs/DataError_ColumnError__Array.h>
#include <Modloader/app/structs/DataError_ColumnError__Boxed.h>
#include <Modloader/app/structs/DataError_ColumnError__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataError_ColumnError {
        inline app::DataError_ColumnError__Class** type_info() {
            static app::DataError_ColumnError__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataError_ColumnError__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataError_ColumnError__Class* get_class() {
            return il2cpp::get_nested_class<app::DataError_ColumnError__Class>(type_info(), "System.Data", "DataError", "ColumnError");
        }
        inline app::DataError_ColumnError* create() {
            return il2cpp::create_object<app::DataError_ColumnError>(get_class());
        }
        inline app::DataError_ColumnError__Boxed* box(app::DataError_ColumnError value) {
            return il2cpp::box_value<app::DataError_ColumnError__Boxed>(get_class(), value);
        }
        inline app::DataError_ColumnError__Array* create_array(int size) {
            return il2cpp::array_new<app::DataError_ColumnError__Array>(get_class(), size);
        }
        inline app::DataError_ColumnError__Array* create_array(const std::vector<app::DataError_ColumnError>& items) {
            return il2cpp::array_new<app::DataError_ColumnError__Array>(get_class(), items);
        }
    } // namespace DataError_ColumnError
} // namespace app::classes::types
