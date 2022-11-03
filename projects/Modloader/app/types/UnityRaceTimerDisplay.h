#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityRaceTimerDisplay {
        namespace {
            inline app::UnityRaceTimerDisplay__Class* type_info_ref = nullptr;
        }
        inline app::UnityRaceTimerDisplay__Class** type_info = &type_info_ref;
        inline app::UnityRaceTimerDisplay__Class* get_class() {
            return il2cpp::get_class<app::UnityRaceTimerDisplay__Class>(type_info, "", "UnityRaceTimerDisplay");
        }
        inline app::UnityRaceTimerDisplay* create() {
            return il2cpp::create_object<app::UnityRaceTimerDisplay>(get_class());
        }
    } // namespace UnityRaceTimerDisplay
} // namespace app::classes::types
