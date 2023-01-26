#pragma once
#include <Modloader/app/structs/CsvReader_ReadToEnd_d_11.h>
#include <Modloader/app/structs/CsvReader_ReadToEnd_d_11__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CsvReader_ReadToEnd_d_11 {
        inline app::CsvReader_ReadToEnd_d_11__Class** type_info() {
            static app::CsvReader_ReadToEnd_d_11__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CsvReader_ReadToEnd_d_11__Class**)(modloader::win::memory::resolve_rva(0x0476C0B8));
            }
            return cache;
        }
        inline app::CsvReader_ReadToEnd_d_11__Class* get_class() {
            return il2cpp::get_nested_class<app::CsvReader_ReadToEnd_d_11__Class>(type_info(), "Moon", "CsvReader", "<ReadToEnd>d__11");
        }
        inline app::CsvReader_ReadToEnd_d_11* create() {
            return il2cpp::create_object<app::CsvReader_ReadToEnd_d_11>(get_class());
        }
    } // namespace CsvReader_ReadToEnd_d_11
} // namespace app::classes::types
