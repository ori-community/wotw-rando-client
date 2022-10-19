#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FontUpdateTracker {
        inline app::FontUpdateTracker__Class** type_info = (app::FontUpdateTracker__Class**)(modloader::win::memory::resolve_rva(0x04774480));
        inline app::FontUpdateTracker__Class* get_class() {
            return il2cpp::get_class<app::FontUpdateTracker__Class>(type_info, "UnityEngine.UI", "FontUpdateTracker");
        }
        inline app::FontUpdateTracker* create() {
            return il2cpp::create_object<app::FontUpdateTracker>(get_class());
        }
    } // namespace FontUpdateTracker
} // namespace app::classes::types
