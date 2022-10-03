#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CsvWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CsvWriter__Class** type_info;
        inline app::CsvWriter__Class* get_class() {
            return il2cpp::get_class<app::CsvWriter__Class>(type_info, "Moon", "CsvWriter");
        }
        inline app::CsvWriter* create() {
            return il2cpp::create_object<app::CsvWriter>(get_class());
        }
    } // namespace CsvWriter
} // namespace app::classes::types
