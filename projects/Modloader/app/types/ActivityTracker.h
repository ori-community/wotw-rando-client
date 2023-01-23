#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActivityTracker__Class.h>
#include <Modloader/app/structs/ActivityTracker.h>

namespace app::classes::types {
    namespace ActivityTracker {
        inline app::ActivityTracker__Class** type_info = (app::ActivityTracker__Class**)(modloader::win::memory::resolve_rva(0x04771E28));
        inline app::ActivityTracker__Class* get_class() {
            return il2cpp::get_class<app::ActivityTracker__Class>(type_info, "System.Diagnostics.Tracing", "ActivityTracker");
        }
        inline app::ActivityTracker* create() {
            return il2cpp::create_object<app::ActivityTracker>(get_class());
        }
    } // namespace ActivityTracker
} // namespace app::classes::types
