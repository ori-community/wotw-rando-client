#pragma once
#include <Modloader/app/structs/IsXboxSeriesXCondition.h>
#include <Modloader/app/structs/IsXboxSeriesXCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsXboxSeriesXCondition {
        inline app::IsXboxSeriesXCondition__Class** type_info() {
            static app::IsXboxSeriesXCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsXboxSeriesXCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsXboxSeriesXCondition__Class* get_class() {
            return il2cpp::get_class<app::IsXboxSeriesXCondition__Class>(type_info(), "", "IsXboxSeriesXCondition");
        }
        inline app::IsXboxSeriesXCondition* create() {
            return il2cpp::create_object<app::IsXboxSeriesXCondition>(get_class());
        }
    } // namespace IsXboxSeriesXCondition
} // namespace app::classes::types
