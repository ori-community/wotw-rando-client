#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DayOfWeek__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DayOfWeek__Enum__Class** type_info;
        inline app::DayOfWeek__Enum__Class* get_class() {
            return il2cpp::get_class<app::DayOfWeek__Enum__Class>(type_info, "System", "DayOfWeek");
        }
        inline app::DayOfWeek__Enum* create() {
            return il2cpp::create_object<app::DayOfWeek__Enum>(get_class());
        }
    } // namespace DayOfWeek__Enum
} // namespace app::classes::types
