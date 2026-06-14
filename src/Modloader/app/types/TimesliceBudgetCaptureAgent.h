#pragma once
#include <Modloader/app/structs/TimesliceBudgetCaptureAgent.h>
#include <Modloader/app/structs/TimesliceBudgetCaptureAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimesliceBudgetCaptureAgent {
        inline app::TimesliceBudgetCaptureAgent__Class** type_info() {
            static app::TimesliceBudgetCaptureAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimesliceBudgetCaptureAgent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimesliceBudgetCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::TimesliceBudgetCaptureAgent__Class>(type_info(), "", "TimesliceBudgetCaptureAgent");
        }
        inline app::TimesliceBudgetCaptureAgent* create() {
            return il2cpp::create_object<app::TimesliceBudgetCaptureAgent>(get_class());
        }
    } // namespace TimesliceBudgetCaptureAgent
} // namespace app::classes::types
