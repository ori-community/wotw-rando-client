#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CsvReader_ReadToEnd_d_11 {
        inline app::CsvReader_ReadToEnd_d_11__Class** type_info = (app::CsvReader_ReadToEnd_d_11__Class**)(modloader::win::memory::resolve_rva(0x0476C0B8));
        inline app::CsvReader_ReadToEnd_d_11__Class* get_class() {
            return il2cpp::get_nested_class<app::CsvReader_ReadToEnd_d_11__Class>(type_info, "Moon", "CsvReader", "<ReadToEnd>d__11");
        }
        inline app::CsvReader_ReadToEnd_d_11* create() {
            return il2cpp::create_object<app::CsvReader_ReadToEnd_d_11>(get_class());
        }
    } // namespace CsvReader_ReadToEnd_d_11
} // namespace app::classes::types
