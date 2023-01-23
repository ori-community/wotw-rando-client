#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimesliceBudgetCaptureAgent__Class.h>
#include <Modloader/app/structs/TimesliceBudgetCaptureAgent.h>

namespace app::classes::types {
    namespace TimesliceBudgetCaptureAgent {
        namespace {
            inline app::TimesliceBudgetCaptureAgent__Class* type_info_ref = nullptr;
        }
        inline app::TimesliceBudgetCaptureAgent__Class** type_info = &type_info_ref;
        inline app::TimesliceBudgetCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::TimesliceBudgetCaptureAgent__Class>(type_info, "", "TimesliceBudgetCaptureAgent");
        }
        inline app::TimesliceBudgetCaptureAgent* create() {
            return il2cpp::create_object<app::TimesliceBudgetCaptureAgent>(get_class());
        }
    } // namespace TimesliceBudgetCaptureAgent
} // namespace app::classes::types
