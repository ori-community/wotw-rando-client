#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CsvReader_ReadRow_d_10 {
        inline app::CsvReader_ReadRow_d_10__Class** type_info = (app::CsvReader_ReadRow_d_10__Class**)(modloader::win::memory::resolve_rva(0x04720AE8));
        inline app::CsvReader_ReadRow_d_10__Class* get_class() {
            return il2cpp::get_nested_class<app::CsvReader_ReadRow_d_10__Class>(type_info, "Moon", "CsvReader", "<ReadRow>d__10");
        }
        inline app::CsvReader_ReadRow_d_10* create() {
            return il2cpp::create_object<app::CsvReader_ReadRow_d_10>(get_class());
        }
    } // namespace CsvReader_ReadRow_d_10
} // namespace app::classes::types
