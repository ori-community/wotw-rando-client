#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GregorianCalendar {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GregorianCalendar__Class** type_info;
        inline app::GregorianCalendar__Class* get_class() {
            return il2cpp::get_class<app::GregorianCalendar__Class>(type_info, "System.Globalization", "GregorianCalendar");
        }
        inline app::GregorianCalendar* create() {
            return il2cpp::create_object<app::GregorianCalendar>(get_class());
        }
    } // namespace GregorianCalendar
} // namespace app::classes::types
