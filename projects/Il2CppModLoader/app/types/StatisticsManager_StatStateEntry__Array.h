#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatisticsManager_StatStateEntry__Array {
        namespace {
            app::StatisticsManager_StatStateEntry__Array__Class* type_info_ref = nullptr;
        }
        app::StatisticsManager_StatStateEntry__Array__Class** type_info = &type_info_ref;
        inline app::StatisticsManager_StatStateEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticsManager_StatStateEntry__Array__Class>(type_info, "", "StatisticsManager+StatStateEntry[]");
        }
        inline app::StatisticsManager_StatStateEntry__Array* create() {
            return il2cpp::create_object<app::StatisticsManager_StatStateEntry__Array>(get_class());
        }
    } // namespace StatisticsManager_StatStateEntry__Array
} // namespace app::classes::types
