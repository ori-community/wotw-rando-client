#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivityTracker_ActivityInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActivityTracker_ActivityInfo__Class** type_info;
        inline app::ActivityTracker_ActivityInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::ActivityTracker_ActivityInfo__Class>(type_info, "System.Diagnostics.Tracing", "ActivityTracker", "ActivityInfo");
        }
        inline app::ActivityTracker_ActivityInfo* create() {
            return il2cpp::create_object<app::ActivityTracker_ActivityInfo>(get_class());
        }
    } // namespace ActivityTracker_ActivityInfo
} // namespace app::classes::types
