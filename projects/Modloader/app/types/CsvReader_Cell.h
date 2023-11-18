#pragma once
#include <Modloader/app/structs/CsvReader_Cell.h>
#include <Modloader/app/structs/CsvReader_Cell__Array.h>
#include <Modloader/app/structs/CsvReader_Cell__Boxed.h>
#include <Modloader/app/structs/CsvReader_Cell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CsvReader_Cell {
        inline app::CsvReader_Cell__Class** type_info() {
            static app::CsvReader_Cell__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CsvReader_Cell__Class**)(modloader::win::memory::resolve_rva(0x04790D38));
            }
            return cache;
        }
        inline app::CsvReader_Cell__Class* get_class() {
            return il2cpp::get_nested_class<app::CsvReader_Cell__Class>(type_info(), "Moon", "CsvReader", "Cell");
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
