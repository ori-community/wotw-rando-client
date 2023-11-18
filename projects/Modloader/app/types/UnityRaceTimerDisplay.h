#pragma once
#include <Modloader/app/structs/UnityRaceTimerDisplay.h>
#include <Modloader/app/structs/UnityRaceTimerDisplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityRaceTimerDisplay {
        inline app::UnityRaceTimerDisplay__Class** type_info() {
            static app::UnityRaceTimerDisplay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityRaceTimerDisplay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityRaceTimerDisplay__Class* get_class() {
            return il2cpp::get_class<app::UnityRaceTimerDisplay__Class>(type_info(), "", "UnityRaceTimerDisplay");
        }
        inline app::UnityRaceTimerDisplay* create() {
            return il2cpp::create_object<app::UnityRaceTimerDisplay>(get_class());
        }
    } // namespace UnityRaceTimerDisplay
} // namespace app::classes::types
