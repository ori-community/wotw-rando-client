#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GenericCastManagerScheduleJobs__Class.h>
#include <Modloader/app/structs/GenericCastManagerScheduleJobs.h>

namespace app::classes::types {
    namespace GenericCastManagerScheduleJobs {
        namespace {
            inline app::GenericCastManagerScheduleJobs__Class* type_info_ref = nullptr;
        }
        inline app::GenericCastManagerScheduleJobs__Class** type_info = &type_info_ref;
        inline app::GenericCastManagerScheduleJobs__Class* get_class() {
            return il2cpp::get_class<app::GenericCastManagerScheduleJobs__Class>(type_info, "", "GenericCastManagerScheduleJobs");
        }
        inline app::GenericCastManagerScheduleJobs* create() {
            return il2cpp::create_object<app::GenericCastManagerScheduleJobs>(get_class());
        }
    } // namespace GenericCastManagerScheduleJobs
} // namespace app::classes::types
