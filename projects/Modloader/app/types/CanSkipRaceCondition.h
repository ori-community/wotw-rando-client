#pragma once
#include <Modloader/app/structs/CanSkipRaceCondition.h>
#include <Modloader/app/structs/CanSkipRaceCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanSkipRaceCondition {
        inline app::CanSkipRaceCondition__Class** type_info() {
            static app::CanSkipRaceCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanSkipRaceCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanSkipRaceCondition__Class* get_class() {
            return il2cpp::get_class<app::CanSkipRaceCondition__Class>(type_info(), "Moon.Race", "CanSkipRaceCondition");
        }
        inline app::CanSkipRaceCondition* create() {
            return il2cpp::create_object<app::CanSkipRaceCondition>(get_class());
        }
    } // namespace CanSkipRaceCondition
} // namespace app::classes::types
