#pragma once
#include <Modloader/app/structs/RaceStartCondition.h>
#include <Modloader/app/structs/RaceStartCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceStartCondition {
        inline app::RaceStartCondition__Class** type_info() {
            static app::RaceStartCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceStartCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceStartCondition__Class* get_class() {
            return il2cpp::get_class<app::RaceStartCondition__Class>(type_info(), "", "RaceStartCondition");
        }
        inline app::RaceStartCondition* create() {
            return il2cpp::create_object<app::RaceStartCondition>(get_class());
        }
    } // namespace RaceStartCondition
} // namespace app::classes::types
