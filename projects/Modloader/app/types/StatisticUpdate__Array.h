#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StatisticUpdate__Array__Class.h>
#include <Modloader/app/structs/StatisticUpdate__Array.h>

namespace app::classes::types {
    namespace StatisticUpdate__Array {
        namespace {
            inline app::StatisticUpdate__Array__Class* type_info_ref = nullptr;
        }
        inline app::StatisticUpdate__Array__Class** type_info = &type_info_ref;
        inline app::StatisticUpdate__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticUpdate__Array__Class>(type_info, "PlayFab.ClientModels", "StatisticUpdate[]");
        }
        inline app::StatisticUpdate__Array* create() {
            return il2cpp::create_object<app::StatisticUpdate__Array>(get_class());
        }
    } // namespace StatisticUpdate__Array
} // namespace app::classes::types
