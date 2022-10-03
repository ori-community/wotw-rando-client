#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixedUpdateScheduler_ScheduledAction__Array {
        namespace {
            app::FixedUpdateScheduler_ScheduledAction__Array__Class* type_info_ref = nullptr;
        }
        app::FixedUpdateScheduler_ScheduledAction__Array__Class** type_info = &type_info_ref;
        inline app::FixedUpdateScheduler_ScheduledAction__Array__Class* get_class() {
            return il2cpp::get_class<app::FixedUpdateScheduler_ScheduledAction__Array__Class>(type_info, "", "FixedUpdateScheduler+ScheduledAction[]");
        }
        inline app::FixedUpdateScheduler_ScheduledAction__Array* create() {
            return il2cpp::create_object<app::FixedUpdateScheduler_ScheduledAction__Array>(get_class());
        }
    } // namespace FixedUpdateScheduler_ScheduledAction__Array
} // namespace app::classes::types
