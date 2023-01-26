#pragma once
#include <Modloader/app/structs/TimelineEntityTask.h>
#include <Modloader/app/structs/TimelineEntityTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineEntityTask {
        inline app::TimelineEntityTask__Class** type_info() {
            static app::TimelineEntityTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineEntityTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineEntityTask__Class* get_class() {
            return il2cpp::get_class<app::TimelineEntityTask__Class>(type_info(), "", "TimelineEntityTask");
        }
        inline app::TimelineEntityTask* create() {
            return il2cpp::create_object<app::TimelineEntityTask>(get_class());
        }
    } // namespace TimelineEntityTask
} // namespace app::classes::types
