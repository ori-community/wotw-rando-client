#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeSlicedAwakeBudgetMenuItem {
        inline app::TimeSlicedAwakeBudgetMenuItem__Class** type_info = (app::TimeSlicedAwakeBudgetMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04784FC8));
        inline app::TimeSlicedAwakeBudgetMenuItem__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedAwakeBudgetMenuItem__Class>(type_info, "", "TimeSlicedAwakeBudgetMenuItem");
        }
        inline app::TimeSlicedAwakeBudgetMenuItem* create() {
            return il2cpp::create_object<app::TimeSlicedAwakeBudgetMenuItem>(get_class());
        }
    } // namespace TimeSlicedAwakeBudgetMenuItem
} // namespace app::classes::types
