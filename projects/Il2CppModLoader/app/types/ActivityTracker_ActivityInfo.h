#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActivityTracker_ActivityInfo {
        inline app::ActivityTracker_ActivityInfo__Class** type_info = (app::ActivityTracker_ActivityInfo__Class**)(modloader::win::memory::resolve_rva(0x047022A8));
        inline app::ActivityTracker_ActivityInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::ActivityTracker_ActivityInfo__Class>(type_info, "System.Diagnostics.Tracing", "ActivityTracker", "ActivityInfo");
        }
        inline app::ActivityTracker_ActivityInfo* create() {
            return il2cpp::create_object<app::ActivityTracker_ActivityInfo>(get_class());
        }
    } // namespace ActivityTracker_ActivityInfo
} // namespace app::classes::types
