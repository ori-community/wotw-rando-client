#pragma once
#include <Modloader/app/structs/MasterTimelineCompleted.h>
#include <Modloader/app/structs/MasterTimelineCompleted__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MasterTimelineCompleted {
        inline app::MasterTimelineCompleted__Class** type_info() {
            static app::MasterTimelineCompleted__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MasterTimelineCompleted__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MasterTimelineCompleted__Class* get_class() {
            return il2cpp::get_class<app::MasterTimelineCompleted__Class>(type_info(), "", "MasterTimelineCompleted");
        }
        inline app::MasterTimelineCompleted* create() {
            return il2cpp::create_object<app::MasterTimelineCompleted>(get_class());
        }
    } // namespace MasterTimelineCompleted
} // namespace app::classes::types
