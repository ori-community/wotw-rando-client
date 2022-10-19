#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatisticsManager_RuntimeStatEntry__Array {
        namespace {
            inline app::StatisticsManager_RuntimeStatEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::StatisticsManager_RuntimeStatEntry__Array__Class** type_info = &type_info_ref;
        inline app::StatisticsManager_RuntimeStatEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticsManager_RuntimeStatEntry__Array__Class>(type_info, "", "StatisticsManager+RuntimeStatEntry[]");
        }
        inline app::StatisticsManager_RuntimeStatEntry__Array* create() {
            return il2cpp::create_object<app::StatisticsManager_RuntimeStatEntry__Array>(get_class());
        }
    } // namespace StatisticsManager_RuntimeStatEntry__Array
} // namespace app::classes::types
