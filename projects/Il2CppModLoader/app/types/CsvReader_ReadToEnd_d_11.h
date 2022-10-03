#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CsvReader_ReadToEnd_d_11 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CsvReader_ReadToEnd_d_11__Class** type_info;
        inline app::CsvReader_ReadToEnd_d_11__Class* get_class() {
            return il2cpp::get_nested_class<app::CsvReader_ReadToEnd_d_11__Class>(type_info, "Moon", "CsvReader", "<ReadToEnd>d__11");
        }
        inline app::CsvReader_ReadToEnd_d_11* create() {
            return il2cpp::create_object<app::CsvReader_ReadToEnd_d_11>(get_class());
        }
    } // namespace CsvReader_ReadToEnd_d_11
} // namespace app::classes::types
