#pragma once
#include <Modloader/app/structs/CanRetryRaceCondition.h>
#include <Modloader/app/structs/CanRetryRaceCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanRetryRaceCondition {
        inline app::CanRetryRaceCondition__Class** type_info() {
            static app::CanRetryRaceCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanRetryRaceCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanRetryRaceCondition__Class* get_class() {
            return il2cpp::get_class<app::CanRetryRaceCondition__Class>(type_info(), "Moon.Race", "CanRetryRaceCondition");
        }
        inline app::CanRetryRaceCondition* create() {
            return il2cpp::create_object<app::CanRetryRaceCondition>(get_class());
        }
    } // namespace CanRetryRaceCondition
} // namespace app::classes::types
