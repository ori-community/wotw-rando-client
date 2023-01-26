#pragma once
#include <Modloader/app/structs/GenericCastManagerScheduleJobs.h>
#include <Modloader/app/structs/GenericCastManagerScheduleJobs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericCastManagerScheduleJobs {
        inline app::GenericCastManagerScheduleJobs__Class** type_info() {
            static app::GenericCastManagerScheduleJobs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericCastManagerScheduleJobs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericCastManagerScheduleJobs__Class* get_class() {
            return il2cpp::get_class<app::GenericCastManagerScheduleJobs__Class>(type_info(), "", "GenericCastManagerScheduleJobs");
        }
        inline app::GenericCastManagerScheduleJobs* create() {
            return il2cpp::create_object<app::GenericCastManagerScheduleJobs>(get_class());
        }
    } // namespace GenericCastManagerScheduleJobs
} // namespace app::classes::types
