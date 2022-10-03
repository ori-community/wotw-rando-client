#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FontUpdateTracker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FontUpdateTracker__Class** type_info;
        inline app::FontUpdateTracker__Class* get_class() {
            return il2cpp::get_class<app::FontUpdateTracker__Class>(type_info, "UnityEngine.UI", "FontUpdateTracker");
        }
        inline app::FontUpdateTracker* create() {
            return il2cpp::create_object<app::FontUpdateTracker>(get_class());
        }
    } // namespace FontUpdateTracker
} // namespace app::classes::types
