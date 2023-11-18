#pragma once
#include <Modloader/app/structs/IScreenTimeTracker.h>
#include <Modloader/app/structs/IScreenTimeTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IScreenTimeTracker {
        inline app::IScreenTimeTracker__Class** type_info() {
            static app::IScreenTimeTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IScreenTimeTracker__Class**)(modloader::win::memory::resolve_rva(0x0478DB20));
            }
            return cache;
        }
        inline app::IScreenTimeTracker__Class* get_class() {
            return il2cpp::get_class<app::IScreenTimeTracker__Class>(type_info(), "PlayFab.Public", "IScreenTimeTracker");
        }
    } // namespace IScreenTimeTracker
} // namespace app::classes::types
