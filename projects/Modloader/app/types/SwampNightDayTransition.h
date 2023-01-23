#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwampNightDayTransition__Class.h>
#include <Modloader/app/structs/SwampNightDayTransition.h>

namespace app::classes::types {
    namespace SwampNightDayTransition {
        namespace {
            inline app::SwampNightDayTransition__Class* type_info_ref = nullptr;
        }
        inline app::SwampNightDayTransition__Class** type_info = &type_info_ref;
        inline app::SwampNightDayTransition__Class* get_class() {
            return il2cpp::get_class<app::SwampNightDayTransition__Class>(type_info, "", "SwampNightDayTransition");
        }
        inline app::SwampNightDayTransition* create() {
            return il2cpp::create_object<app::SwampNightDayTransition>(get_class());
        }
    } // namespace SwampNightDayTransition
} // namespace app::classes::types
