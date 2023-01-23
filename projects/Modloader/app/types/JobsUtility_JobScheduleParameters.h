#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/JobsUtility_JobScheduleParameters__Class.h>
#include <Modloader/app/structs/JobsUtility_JobScheduleParameters.h>
#include <Modloader/app/structs/JobsUtility_JobScheduleParameters__Boxed.h>

namespace app::classes::types {
    namespace JobsUtility_JobScheduleParameters {
        namespace {
            inline app::JobsUtility_JobScheduleParameters__Class* type_info_ref = nullptr;
        }
        inline app::JobsUtility_JobScheduleParameters__Class** type_info = &type_info_ref;
        inline app::JobsUtility_JobScheduleParameters__Class* get_class() {
            return il2cpp::get_nested_class<app::JobsUtility_JobScheduleParameters__Class>(type_info, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility", "JobScheduleParameters");
        }
        inline app::JobsUtility_JobScheduleParameters* create() {
            return il2cpp::create_object<app::JobsUtility_JobScheduleParameters>(get_class());
        }
        inline app::JobsUtility_JobScheduleParameters__Boxed* box(app::JobsUtility_JobScheduleParameters value) {
            return il2cpp::box_value<app::JobsUtility_JobScheduleParameters__Boxed>(get_class(), value);
        }
    } // namespace JobsUtility_JobScheduleParameters
} // namespace app::classes::types
