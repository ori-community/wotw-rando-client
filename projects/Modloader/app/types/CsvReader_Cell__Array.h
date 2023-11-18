#pragma once
#include <Modloader/app/structs/CsvReader_Cell__Array.h>
#include <Modloader/app/structs/CsvReader_Cell__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CsvReader_Cell__Array {
        inline app::CsvReader_Cell__Array__Class** type_info() {
            static app::CsvReader_Cell__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CsvReader_Cell__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CsvReader_Cell__Array__Class* get_class() {
            return il2cpp::get_class<app::CsvReader_Cell__Array__Class>(type_info(), "Moon", "CsvReader+Cell[]");
        }
        inline app::CsvReader_Cell__Array* create() {
            return il2cpp::create_object<app::CsvReader_Cell__Array>(get_class());
        }
    } // namespace CsvReader_Cell__Array
} // namespace app::classes::types
