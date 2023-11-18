#pragma once
#include <Modloader/app/structs/TimeSlicedAwakeBudgetMenuItem.h>
#include <Modloader/app/structs/TimeSlicedAwakeBudgetMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedAwakeBudgetMenuItem {
        inline app::TimeSlicedAwakeBudgetMenuItem__Class** type_info() {
            static app::TimeSlicedAwakeBudgetMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimeSlicedAwakeBudgetMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04784FC8));
            }
            return cache;
        }
        inline app::TimeSlicedAwakeBudgetMenuItem__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedAwakeBudgetMenuItem__Class>(type_info(), "", "TimeSlicedAwakeBudgetMenuItem");
        }
        inline app::TimeSlicedAwakeBudgetMenuItem* create() {
            return il2cpp::create_object<app::TimeSlicedAwakeBudgetMenuItem>(get_class());
        }
    } // namespace TimeSlicedAwakeBudgetMenuItem
} // namespace app::classes::types
