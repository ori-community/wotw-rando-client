#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnalyticsSessionInfo {
        inline app::AnalyticsSessionInfo__Class** type_info = (app::AnalyticsSessionInfo__Class**)(modloader::win::memory::resolve_rva(0x047668F0));
        inline app::AnalyticsSessionInfo__Class* get_class() {
            return il2cpp::get_class<app::AnalyticsSessionInfo__Class>(type_info, "UnityEngine.Analytics", "AnalyticsSessionInfo");
        }
        inline app::AnalyticsSessionInfo* create() {
            return il2cpp::create_object<app::AnalyticsSessionInfo>(get_class());
        }
    } // namespace AnalyticsSessionInfo
} // namespace app::classes::types
