#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum {
        namespace {
            inline app::TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum__Class** type_info = &type_info_ref;
        inline app::TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum__Class>(type_info, "", "TimesliceBudgetCaptureAgent", "TimeSliceBudgetHeader");
        }
        inline app::TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum* create() {
            return il2cpp::create_object<app::TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum>(get_class());
        }
    } // namespace TimesliceBudgetCaptureAgent_TimeSliceBudgetHeader__Enum
} // namespace app::classes::types
