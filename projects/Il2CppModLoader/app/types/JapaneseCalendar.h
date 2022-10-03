#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JapaneseCalendar {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JapaneseCalendar__Class** type_info;
        inline app::JapaneseCalendar__Class* get_class() {
            return il2cpp::get_class<app::JapaneseCalendar__Class>(type_info, "System.Globalization", "JapaneseCalendar");
        }
        inline app::JapaneseCalendar* create() {
            return il2cpp::create_object<app::JapaneseCalendar>(get_class());
        }
    } // namespace JapaneseCalendar
} // namespace app::classes::types
