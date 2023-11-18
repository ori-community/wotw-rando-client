#pragma once
#include <Modloader/app/structs/SwampNightDayTransition.h>
#include <Modloader/app/structs/SwampNightDayTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwampNightDayTransition {
        inline app::SwampNightDayTransition__Class** type_info() {
            static app::SwampNightDayTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwampNightDayTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwampNightDayTransition__Class* get_class() {
            return il2cpp::get_class<app::SwampNightDayTransition__Class>(type_info(), "", "SwampNightDayTransition");
        }
        inline app::SwampNightDayTransition* create() {
            return il2cpp::create_object<app::SwampNightDayTransition>(get_class());
        }
    } // namespace SwampNightDayTransition
} // namespace app::classes::types
