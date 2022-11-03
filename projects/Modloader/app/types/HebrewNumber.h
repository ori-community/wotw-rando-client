#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HebrewNumber {
        inline app::HebrewNumber__Class** type_info = (app::HebrewNumber__Class**)(modloader::win::memory::resolve_rva(0x04795478));
        inline app::HebrewNumber__Class* get_class() {
            return il2cpp::get_class<app::HebrewNumber__Class>(type_info, "System.Globalization", "HebrewNumber");
        }
        inline app::HebrewNumber* create() {
            return il2cpp::create_object<app::HebrewNumber>(get_class());
        }
    } // namespace HebrewNumber
} // namespace app::classes::types
