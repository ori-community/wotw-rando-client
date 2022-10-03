#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnalyticsSessionInfo_SessionStateChanged {
        namespace {
            app::AnalyticsSessionInfo_SessionStateChanged__Class* type_info_ref = nullptr;
        }
        app::AnalyticsSessionInfo_SessionStateChanged__Class** type_info = &type_info_ref;
        inline app::AnalyticsSessionInfo_SessionStateChanged__Class* get_class() {
            return il2cpp::get_nested_class<app::AnalyticsSessionInfo_SessionStateChanged__Class>(type_info, "UnityEngine.Analytics", "AnalyticsSessionInfo", "SessionStateChanged");
        }
        inline app::AnalyticsSessionInfo_SessionStateChanged* create() {
            return il2cpp::create_object<app::AnalyticsSessionInfo_SessionStateChanged>(get_class());
        }
    } // namespace AnalyticsSessionInfo_SessionStateChanged
} // namespace app::classes::types
