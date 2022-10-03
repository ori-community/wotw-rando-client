#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivityTracker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActivityTracker__Class** type_info;
        inline app::ActivityTracker__Class* get_class() {
            return il2cpp::get_class<app::ActivityTracker__Class>(type_info, "System.Diagnostics.Tracing", "ActivityTracker");
        }
        inline app::ActivityTracker* create() {
            return il2cpp::create_object<app::ActivityTracker>(get_class());
        }
    } // namespace ActivityTracker
} // namespace app::classes::types
