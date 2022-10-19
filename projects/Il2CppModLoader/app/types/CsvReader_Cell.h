#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CsvReader_Cell {
        inline app::CsvReader_Cell__Class** type_info = (app::CsvReader_Cell__Class**)(modloader::win::memory::resolve_rva(0x04790D38));
        inline app::CsvReader_Cell__Class* get_class() {
            return il2cpp::get_nested_class<app::CsvReader_Cell__Class>(type_info, "Moon", "CsvReader", "Cell");
        }
        inline app::CsvReader_Cell* create() {
            return il2cpp::create_object<app::CsvReader_Cell>(get_class());
        }
        inline app::CsvReader_Cell__Boxed* box(app::CsvReader_Cell value) {
            return il2cpp::box_value<app::CsvReader_Cell__Boxed>(get_class(), value);
        }
        inline app::CsvReader_Cell__Array* create_array(int size) {
            return il2cpp::array_new<app::CsvReader_Cell__Array>(get_class(), size);
        }
        inline app::CsvReader_Cell__Array* create_array(const std::vector<app::CsvReader_Cell>& items) {
            return il2cpp::array_new<app::CsvReader_Cell__Array>(get_class(), items);
        }
    } // namespace CsvReader_Cell
} // namespace app::classes::types
