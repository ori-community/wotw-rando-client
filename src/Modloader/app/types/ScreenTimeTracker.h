#pragma once
#include <Modloader/app/structs/ScreenTimeTracker.h>
#include <Modloader/app/structs/ScreenTimeTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScreenTimeTracker {
        inline app::ScreenTimeTracker__Class** type_info() {
            static app::ScreenTimeTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScreenTimeTracker__Class**)(modloader::win::memory::resolve_rva(0x04772620));
            }
            return cache;
        }
        inline app::ScreenTimeTracker__Class* get_class() {
            return il2cpp::get_class<app::ScreenTimeTracker__Class>(type_info(), "PlayFab.Public", "ScreenTimeTracker");
        }
        inline app::ScreenTimeTracker* create() {
            return il2cpp::create_object<app::ScreenTimeTracker>(get_class());
        }
    } // namespace ScreenTimeTracker
} // namespace app::classes::types
