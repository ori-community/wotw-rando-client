#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedAwakeBudgetMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSlicedAwakeBudgetMenuItem__Class** type_info;
        inline app::TimeSlicedAwakeBudgetMenuItem__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedAwakeBudgetMenuItem__Class>(type_info, "", "TimeSlicedAwakeBudgetMenuItem");
        }
        inline app::TimeSlicedAwakeBudgetMenuItem* create() {
            return il2cpp::create_object<app::TimeSlicedAwakeBudgetMenuItem>(get_class());
        }
    } // namespace TimeSlicedAwakeBudgetMenuItem
} // namespace app::classes::types
