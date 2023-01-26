#pragma once
#include <Modloader/app/structs/CsvReader.h>
#include <Modloader/app/structs/CsvReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CsvReader {
        inline app::CsvReader__Class** type_info() {
            static app::CsvReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CsvReader__Class**)(modloader::win::memory::resolve_rva(0x047616C0));
            }
            return cache;
        }
        inline app::CsvReader__Class* get_class() {
            return il2cpp::get_class<app::CsvReader__Class>(type_info(), "Moon", "CsvReader");
        }
        inline app::CsvReader* create() {
            return il2cpp::create_object<app::CsvReader>(get_class());
        }
    } // namespace CsvReader
} // namespace app::classes::types
