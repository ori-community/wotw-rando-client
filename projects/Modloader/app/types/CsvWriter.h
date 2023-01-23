#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CsvWriter__Class.h>
#include <Modloader/app/structs/CsvWriter.h>

namespace app::classes::types {
    namespace CsvWriter {
        inline app::CsvWriter__Class** type_info = (app::CsvWriter__Class**)(modloader::win::memory::resolve_rva(0x04789C08));
        inline app::CsvWriter__Class* get_class() {
            return il2cpp::get_class<app::CsvWriter__Class>(type_info, "Moon", "CsvWriter");
        }
        inline app::CsvWriter* create() {
            return il2cpp::create_object<app::CsvWriter>(get_class());
        }
    } // namespace CsvWriter
} // namespace app::classes::types
