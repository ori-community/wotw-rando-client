#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatisticNameVersion__Array {
        namespace {
            inline app::StatisticNameVersion__Array__Class* type_info_ref = nullptr;
        }
        inline app::StatisticNameVersion__Array__Class** type_info = &type_info_ref;
        inline app::StatisticNameVersion__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticNameVersion__Array__Class>(type_info, "PlayFab.ClientModels", "StatisticNameVersion[]");
        }
        inline app::StatisticNameVersion__Array* create() {
            return il2cpp::create_object<app::StatisticNameVersion__Array>(get_class());
        }
    } // namespace StatisticNameVersion__Array
} // namespace app::classes::types
