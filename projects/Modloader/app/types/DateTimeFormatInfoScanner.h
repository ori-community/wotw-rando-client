#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DateTimeFormatInfoScanner__Class.h>
#include <Modloader/app/structs/DateTimeFormatInfoScanner.h>

namespace app::classes::types {
    namespace DateTimeFormatInfoScanner {
        inline app::DateTimeFormatInfoScanner__Class** type_info = (app::DateTimeFormatInfoScanner__Class**)(modloader::win::memory::resolve_rva(0x04743FB8));
        inline app::DateTimeFormatInfoScanner__Class* get_class() {
            return il2cpp::get_class<app::DateTimeFormatInfoScanner__Class>(type_info, "System.Globalization", "DateTimeFormatInfoScanner");
        }
        inline app::DateTimeFormatInfoScanner* create() {
            return il2cpp::create_object<app::DateTimeFormatInfoScanner>(get_class());
        }
    } // namespace DateTimeFormatInfoScanner
} // namespace app::classes::types
