#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HebrewNumber_HebrewValue__Array {
        inline app::HebrewNumber_HebrewValue__Array__Class** type_info = (app::HebrewNumber_HebrewValue__Array__Class**)(modloader::win::memory::resolve_rva(0x04787860));
        inline app::HebrewNumber_HebrewValue__Array__Class* get_class() {
            return il2cpp::get_class<app::HebrewNumber_HebrewValue__Array__Class>(type_info, "System.Globalization", "HebrewNumber+HebrewValue[]");
        }
        inline app::HebrewNumber_HebrewValue__Array* create() {
            return il2cpp::create_object<app::HebrewNumber_HebrewValue__Array>(get_class());
        }
    } // namespace HebrewNumber_HebrewValue__Array
} // namespace app::classes::types
