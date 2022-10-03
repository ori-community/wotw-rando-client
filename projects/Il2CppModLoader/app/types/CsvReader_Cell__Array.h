#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CsvReader_Cell__Array {
        namespace {
            app::CsvReader_Cell__Array__Class* type_info_ref = nullptr;
        }
        app::CsvReader_Cell__Array__Class** type_info = &type_info_ref;
        inline app::CsvReader_Cell__Array__Class* get_class() {
            return il2cpp::get_class<app::CsvReader_Cell__Array__Class>(type_info, "Moon", "CsvReader+Cell[]");
        }
        inline app::CsvReader_Cell__Array* create() {
            return il2cpp::create_object<app::CsvReader_Cell__Array>(get_class());
        }
    } // namespace CsvReader_Cell__Array
} // namespace app::classes::types
