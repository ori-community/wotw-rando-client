#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TaiwanCalendar {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TaiwanCalendar__Class** type_info;
        inline app::TaiwanCalendar__Class* get_class() {
            return il2cpp::get_class<app::TaiwanCalendar__Class>(type_info, "System.Globalization", "TaiwanCalendar");
        }
        inline app::TaiwanCalendar* create() {
            return il2cpp::create_object<app::TaiwanCalendar>(get_class());
        }
    } // namespace TaiwanCalendar
} // namespace app::classes::types
