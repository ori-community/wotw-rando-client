#pragma once
#include <Modloader/app/structs/CsvReader_ReadRow_d_10.h>
#include <Modloader/app/structs/CsvReader_ReadRow_d_10__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CsvReader_ReadRow_d_10 {
        inline app::CsvReader_ReadRow_d_10__Class** type_info() {
            static app::CsvReader_ReadRow_d_10__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CsvReader_ReadRow_d_10__Class**)(modloader::win::memory::resolve_rva(0x04720AE8));
            }
            return cache;
        }
        inline app::CsvReader_ReadRow_d_10__Class* get_class() {
            return il2cpp::get_nested_class<app::CsvReader_ReadRow_d_10__Class>(type_info(), "Moon", "CsvReader", "<ReadRow>d__10");
        }
        inline app::CsvReader_ReadRow_d_10* create() {
            return il2cpp::create_object<app::CsvReader_ReadRow_d_10>(get_class());
        }
    } // namespace CsvReader_ReadRow_d_10
} // namespace app::classes::types
