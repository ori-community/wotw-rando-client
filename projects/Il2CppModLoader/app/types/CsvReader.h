#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CsvReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CsvReader__Class** type_info;
        inline app::CsvReader__Class* get_class() {
            return il2cpp::get_class<app::CsvReader__Class>(type_info, "Moon", "CsvReader");
        }
        inline app::CsvReader* create() {
            return il2cpp::create_object<app::CsvReader>(get_class());
        }
    } // namespace CsvReader
} // namespace app::classes::types
