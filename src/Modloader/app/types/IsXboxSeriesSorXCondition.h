#pragma once
#include <Modloader/app/structs/IsXboxSeriesSorXCondition.h>
#include <Modloader/app/structs/IsXboxSeriesSorXCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsXboxSeriesSorXCondition {
        inline app::IsXboxSeriesSorXCondition__Class** type_info() {
            static app::IsXboxSeriesSorXCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsXboxSeriesSorXCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsXboxSeriesSorXCondition__Class* get_class() {
            return il2cpp::get_class<app::IsXboxSeriesSorXCondition__Class>(type_info(), "", "IsXboxSeriesSorXCondition");
        }
        inline app::IsXboxSeriesSorXCondition* create() {
            return il2cpp::create_object<app::IsXboxSeriesSorXCondition>(get_class());
        }
    } // namespace IsXboxSeriesSorXCondition
} // namespace app::classes::types
