#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatisticValue__Array {
        namespace {
            inline app::StatisticValue__Array__Class* type_info_ref = nullptr;
        }
        inline app::StatisticValue__Array__Class** type_info = &type_info_ref;
        inline app::StatisticValue__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticValue__Array__Class>(type_info, "PlayFab.ClientModels", "StatisticValue[]");
        }
        inline app::StatisticValue__Array* create() {
            return il2cpp::create_object<app::StatisticValue__Array>(get_class());
        }
    } // namespace StatisticValue__Array
} // namespace app::classes::types
