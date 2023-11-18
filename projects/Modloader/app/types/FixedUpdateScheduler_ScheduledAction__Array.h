#pragma once
#include <Modloader/app/structs/FixedUpdateScheduler_ScheduledAction__Array.h>
#include <Modloader/app/structs/FixedUpdateScheduler_ScheduledAction__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedUpdateScheduler_ScheduledAction__Array {
        inline app::FixedUpdateScheduler_ScheduledAction__Array__Class** type_info() {
            static app::FixedUpdateScheduler_ScheduledAction__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FixedUpdateScheduler_ScheduledAction__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FixedUpdateScheduler_ScheduledAction__Array__Class* get_class() {
            return il2cpp::get_class<app::FixedUpdateScheduler_ScheduledAction__Array__Class>(type_info(), "", "FixedUpdateScheduler+ScheduledAction[]");
        }
        inline app::FixedUpdateScheduler_ScheduledAction__Array* create() {
            return il2cpp::create_object<app::FixedUpdateScheduler_ScheduledAction__Array>(get_class());
        }
    } // namespace FixedUpdateScheduler_ScheduledAction__Array
} // namespace app::classes::types
