#pragma once
#include <Modloader/app/structs/IsXboxSeriesSCondition.h>
#include <Modloader/app/structs/IsXboxSeriesSCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsXboxSeriesSCondition {
        inline app::IsXboxSeriesSCondition__Class** type_info() {
            static app::IsXboxSeriesSCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsXboxSeriesSCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsXboxSeriesSCondition__Class* get_class() {
            return il2cpp::get_class<app::IsXboxSeriesSCondition__Class>(type_info(), "", "IsXboxSeriesSCondition");
        }
        inline app::IsXboxSeriesSCondition* create() {
            return il2cpp::create_object<app::IsXboxSeriesSCondition>(get_class());
        }
    } // namespace IsXboxSeriesSCondition
} // namespace app::classes::types
