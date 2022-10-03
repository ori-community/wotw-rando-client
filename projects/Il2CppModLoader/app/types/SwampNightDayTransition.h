#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwampNightDayTransition {
        namespace {
            app::SwampNightDayTransition__Class* type_info_ref = nullptr;
        }
        app::SwampNightDayTransition__Class** type_info = &type_info_ref;
        inline app::SwampNightDayTransition__Class* get_class() {
            return il2cpp::get_class<app::SwampNightDayTransition__Class>(type_info, "", "SwampNightDayTransition");
        }
        inline app::SwampNightDayTransition* create() {
            return il2cpp::create_object<app::SwampNightDayTransition>(get_class());
        }
    } // namespace SwampNightDayTransition
} // namespace app::classes::types
