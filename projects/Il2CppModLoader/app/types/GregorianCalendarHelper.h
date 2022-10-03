#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GregorianCalendarHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GregorianCalendarHelper__Class** type_info;
        inline app::GregorianCalendarHelper__Class* get_class() {
            return il2cpp::get_class<app::GregorianCalendarHelper__Class>(type_info, "System.Globalization", "GregorianCalendarHelper");
        }
        inline app::GregorianCalendarHelper* create() {
            return il2cpp::create_object<app::GregorianCalendarHelper>(get_class());
        }
    } // namespace GregorianCalendarHelper
} // namespace app::classes::types
