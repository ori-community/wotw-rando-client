#pragma once
#include <Modloader/app/structs/ActivityTracker_ActivityInfo.h>
#include <Modloader/app/structs/ActivityTracker_ActivityInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivityTracker_ActivityInfo {
        inline app::ActivityTracker_ActivityInfo__Class** type_info() {
            static app::ActivityTracker_ActivityInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActivityTracker_ActivityInfo__Class**)(modloader::win::memory::resolve_rva(0x047022A8));
            }
            return cache;
        }
        inline app::ActivityTracker_ActivityInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::ActivityTracker_ActivityInfo__Class>(type_info(), "System.Diagnostics.Tracing", "ActivityTracker", "ActivityInfo");
        }
        inline app::ActivityTracker_ActivityInfo* create() {
            return il2cpp::create_object<app::ActivityTracker_ActivityInfo>(get_class());
        }
    } // namespace ActivityTracker_ActivityInfo
} // namespace app::classes::types
