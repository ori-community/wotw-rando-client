#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GregorianCalendarTypes__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GregorianCalendarTypes__Enum__Class** type_info;
        inline app::GregorianCalendarTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::GregorianCalendarTypes__Enum__Class>(type_info, "System.Globalization", "GregorianCalendarTypes");
        }
        inline app::GregorianCalendarTypes__Enum* create() {
            return il2cpp::create_object<app::GregorianCalendarTypes__Enum>(get_class());
        }
    } // namespace GregorianCalendarTypes__Enum
} // namespace app::classes::types
