#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CalendarData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CalendarData__Class** type_info;
        inline app::CalendarData__Class* get_class() {
            return il2cpp::get_class<app::CalendarData__Class>(type_info, "System.Globalization", "CalendarData");
        }
        inline app::CalendarData* create() {
            return il2cpp::create_object<app::CalendarData>(get_class());
        }
        inline app::CalendarData__Array* create_array(int size) {
            return il2cpp::array_new<app::CalendarData__Array>(get_class(), size);
        }
    } // namespace CalendarData
} // namespace app::classes::types
