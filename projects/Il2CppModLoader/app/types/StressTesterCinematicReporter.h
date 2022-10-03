#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StressTesterCinematicReporter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StressTesterCinematicReporter__Class** type_info;
        inline app::StressTesterCinematicReporter__Class* get_class() {
            return il2cpp::get_class<app::StressTesterCinematicReporter__Class>(type_info, "", "StressTesterCinematicReporter");
        }
        inline app::StressTesterCinematicReporter* create() {
            return il2cpp::create_object<app::StressTesterCinematicReporter>(get_class());
        }
    } // namespace StressTesterCinematicReporter
} // namespace app::classes::types
