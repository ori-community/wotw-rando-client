#pragma once
#include <Modloader/app/structs/EarlyUpdate_ExecuteMainThreadJobs.h>
#include <Modloader/app/structs/EarlyUpdate_ExecuteMainThreadJobs__Boxed.h>
#include <Modloader/app/structs/EarlyUpdate_ExecuteMainThreadJobs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_ExecuteMainThreadJobs {
        inline app::EarlyUpdate_ExecuteMainThreadJobs__Class** type_info() {
            static app::EarlyUpdate_ExecuteMainThreadJobs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EarlyUpdate_ExecuteMainThreadJobs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EarlyUpdate_ExecuteMainThreadJobs__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_ExecuteMainThreadJobs__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "ExecuteMainThreadJobs");
        }
        inline app::EarlyUpdate_ExecuteMainThreadJobs* create() {
            return il2cpp::create_object<app::EarlyUpdate_ExecuteMainThreadJobs>(get_class());
        }
        inline app::EarlyUpdate_ExecuteMainThreadJobs__Boxed* box(app::EarlyUpdate_ExecuteMainThreadJobs value) {
            return il2cpp::box_value<app::EarlyUpdate_ExecuteMainThreadJobs__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_ExecuteMainThreadJobs
} // namespace app::classes::types
