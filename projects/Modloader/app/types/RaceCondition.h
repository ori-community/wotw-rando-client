#pragma once
#include <Modloader/app/structs/RaceCondition.h>
#include <Modloader/app/structs/RaceCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceCondition {
        inline app::RaceCondition__Class** type_info() {
            static app::RaceCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceCondition__Class* get_class() {
            return il2cpp::get_class<app::RaceCondition__Class>(type_info(), "", "RaceCondition");
        }
        inline app::RaceCondition* create() {
            return il2cpp::create_object<app::RaceCondition>(get_class());
        }
    } // namespace RaceCondition
} // namespace app::classes::types
