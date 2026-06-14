#pragma once
#include <Modloader/app/structs/RacesEnabledCondition.h>
#include <Modloader/app/structs/RacesEnabledCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RacesEnabledCondition {
        inline app::RacesEnabledCondition__Class** type_info() {
            static app::RacesEnabledCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RacesEnabledCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RacesEnabledCondition__Class* get_class() {
            return il2cpp::get_class<app::RacesEnabledCondition__Class>(type_info(), "", "RacesEnabledCondition");
        }
        inline app::RacesEnabledCondition* create() {
            return il2cpp::create_object<app::RacesEnabledCondition>(get_class());
        }
    } // namespace RacesEnabledCondition
} // namespace app::classes::types
