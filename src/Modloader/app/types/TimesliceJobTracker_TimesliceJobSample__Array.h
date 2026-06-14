#pragma once
#include <Modloader/app/structs/TimesliceJobTracker_TimesliceJobSample__Array.h>
#include <Modloader/app/structs/TimesliceJobTracker_TimesliceJobSample__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimesliceJobTracker_TimesliceJobSample__Array {
        inline app::TimesliceJobTracker_TimesliceJobSample__Array__Class** type_info() {
            static app::TimesliceJobTracker_TimesliceJobSample__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimesliceJobTracker_TimesliceJobSample__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimesliceJobTracker_TimesliceJobSample__Array__Class* get_class() {
            return il2cpp::get_class<app::TimesliceJobTracker_TimesliceJobSample__Array__Class>(type_info(), "", "TimesliceJobTracker+TimesliceJobSample[]");
        }
        inline app::TimesliceJobTracker_TimesliceJobSample__Array* create() {
            return il2cpp::create_object<app::TimesliceJobTracker_TimesliceJobSample__Array>(get_class());
        }
    } // namespace TimesliceJobTracker_TimesliceJobSample__Array
} // namespace app::classes::types
