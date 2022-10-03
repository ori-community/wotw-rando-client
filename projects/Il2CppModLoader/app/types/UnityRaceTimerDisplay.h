#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityRaceTimerDisplay {
        namespace {
            app::UnityRaceTimerDisplay__Class* type_info_ref = nullptr;
        }
        app::UnityRaceTimerDisplay__Class** type_info = &type_info_ref;
        inline app::UnityRaceTimerDisplay__Class* get_class() {
            return il2cpp::get_class<app::UnityRaceTimerDisplay__Class>(type_info, "", "UnityRaceTimerDisplay");
        }
        inline app::UnityRaceTimerDisplay* create() {
            return il2cpp::create_object<app::UnityRaceTimerDisplay>(get_class());
        }
    } // namespace UnityRaceTimerDisplay
} // namespace app::classes::types
