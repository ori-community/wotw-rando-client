#pragma once
#include <Modloader/app/structs/TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum.h>
#include <Modloader/app/structs/TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum {
        inline app::TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum__Class** type_info() {
            static app::TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum__Class>(type_info(), "", "TimesliceBudgetCaptureAgent", "TimeSliceBudgetHeader");
        }
        inline app::TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum* create() {
            return il2cpp::create_object<app::TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum>(get_class());
        }
    } // namespace TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum
} // namespace app::classes::types
