#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScreenTimeTracker {
        inline app::ScreenTimeTracker__Class** type_info = (app::ScreenTimeTracker__Class**)(modloader::win::memory::resolve_rva(0x04772620));
        inline app::ScreenTimeTracker__Class* get_class() {
            return il2cpp::get_class<app::ScreenTimeTracker__Class>(type_info, "PlayFab.Public", "ScreenTimeTracker");
        }
        inline app::ScreenTimeTracker* create() {
            return il2cpp::create_object<app::ScreenTimeTracker>(get_class());
        }
    } // namespace ScreenTimeTracker
} // namespace app::classes::types
