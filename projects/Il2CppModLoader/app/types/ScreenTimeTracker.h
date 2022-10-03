#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenTimeTracker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScreenTimeTracker__Class** type_info;
        inline app::ScreenTimeTracker__Class* get_class() {
            return il2cpp::get_class<app::ScreenTimeTracker__Class>(type_info, "PlayFab.Public", "ScreenTimeTracker");
        }
        inline app::ScreenTimeTracker* create() {
            return il2cpp::create_object<app::ScreenTimeTracker>(get_class());
        }
    } // namespace ScreenTimeTracker
} // namespace app::classes::types
