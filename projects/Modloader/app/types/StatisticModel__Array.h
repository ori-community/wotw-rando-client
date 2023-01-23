#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StatisticModel__Array__Class.h>
#include <Modloader/app/structs/StatisticModel__Array.h>

namespace app::classes::types {
    namespace StatisticModel__Array {
        namespace {
            inline app::StatisticModel__Array__Class* type_info_ref = nullptr;
        }
        inline app::StatisticModel__Array__Class** type_info = &type_info_ref;
        inline app::StatisticModel__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticModel__Array__Class>(type_info, "PlayFab.ClientModels", "StatisticModel[]");
        }
        inline app::StatisticModel__Array* create() {
            return il2cpp::create_object<app::StatisticModel__Array>(get_class());
        }
    } // namespace StatisticModel__Array
} // namespace app::classes::types
