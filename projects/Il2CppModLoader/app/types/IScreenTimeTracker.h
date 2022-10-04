#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IScreenTimeTracker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IScreenTimeTracker__Class** type_info;
        inline app::IScreenTimeTracker__Class* get_class() {
            return il2cpp::get_class<app::IScreenTimeTracker__Class>(type_info, "PlayFab.Public", "IScreenTimeTracker");
        }
        inline app::IScreenTimeTracker* create() {
            return il2cpp::create_object<app::IScreenTimeTracker>(get_class());
        }
    } // namespace IScreenTimeTracker
} // namespace app::classes::types
