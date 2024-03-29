#pragma once
#include <Modloader/app/structs/UberPoolPerfTest_FinishPendingTasks_d_43.h>
#include <Modloader/app/structs/UberPoolPerfTest_FinishPendingTasks_d_43__Boxed.h>
#include <Modloader/app/structs/UberPoolPerfTest_FinishPendingTasks_d_43__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolPerfTest_FinishPendingTasks_d_43 {
        inline app::UberPoolPerfTest_FinishPendingTasks_d_43__Class** type_info() {
            static app::UberPoolPerfTest_FinishPendingTasks_d_43__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolPerfTest_FinishPendingTasks_d_43__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolPerfTest_FinishPendingTasks_d_43__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolPerfTest_FinishPendingTasks_d_43__Class>(type_info(), "", "UberPoolPerfTest", "<FinishPendingTasks>d__43");
        }
        inline app::UberPoolPerfTest_FinishPendingTasks_d_43* create() {
            return il2cpp::create_object<app::UberPoolPerfTest_FinishPendingTasks_d_43>(get_class());
        }
        inline app::UberPoolPerfTest_FinishPendingTasks_d_43__Boxed* box(app::UberPoolPerfTest_FinishPendingTasks_d_43 value) {
            return il2cpp::box_value<app::UberPoolPerfTest_FinishPendingTasks_d_43__Boxed>(get_class(), value);
        }
    } // namespace UberPoolPerfTest_FinishPendingTasks_d_43
} // namespace app::classes::types
