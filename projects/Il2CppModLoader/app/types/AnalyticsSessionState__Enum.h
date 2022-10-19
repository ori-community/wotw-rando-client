#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnalyticsSessionState__Enum {
        inline app::AnalyticsSessionState__Enum__Class** type_info = (app::AnalyticsSessionState__Enum__Class**)(modloader::win::memory::resolve_rva(0x04776E20));
        inline app::AnalyticsSessionState__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnalyticsSessionState__Enum__Class>(type_info, "UnityEngine.Analytics", "AnalyticsSessionState");
        }
        inline app::AnalyticsSessionState__Enum* create() {
            return il2cpp::create_object<app::AnalyticsSessionState__Enum>(get_class());
        }
    } // namespace AnalyticsSessionState__Enum
} // namespace app::classes::types
