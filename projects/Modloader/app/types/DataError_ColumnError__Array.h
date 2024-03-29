#pragma once
#include <Modloader/app/structs/DataError_ColumnError__Array.h>
#include <Modloader/app/structs/DataError_ColumnError__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataError_ColumnError__Array {
        inline app::DataError_ColumnError__Array__Class** type_info() {
            static app::DataError_ColumnError__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataError_ColumnError__Array__Class**)(modloader::win::memory::resolve_rva(0x047709A0));
            }
            return cache;
        }
        inline app::DataError_ColumnError__Array__Class* get_class() {
            return il2cpp::get_class<app::DataError_ColumnError__Array__Class>(type_info(), "System.Data", "DataError+ColumnError[]");
        }
        inline app::DataError_ColumnError__Array* create() {
            return il2cpp::create_object<app::DataError_ColumnError__Array>(get_class());
        }
    } // namespace DataError_ColumnError__Array
} // namespace app::classes::types
