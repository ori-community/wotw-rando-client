#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsXboxSeriesSorXCondition__Class.h>
#include <Modloader/app/structs/IsXboxSeriesSorXCondition.h>

namespace app::classes::types {
    namespace IsXboxSeriesSorXCondition {
        namespace {
            inline app::IsXboxSeriesSorXCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsXboxSeriesSorXCondition__Class** type_info = &type_info_ref;
        inline app::IsXboxSeriesSorXCondition__Class* get_class() {
            return il2cpp::get_class<app::IsXboxSeriesSorXCondition__Class>(type_info, "", "IsXboxSeriesSorXCondition");
        }
        inline app::IsXboxSeriesSorXCondition* create() {
            return il2cpp::create_object<app::IsXboxSeriesSorXCondition>(get_class());
        }
    } // namespace IsXboxSeriesSorXCondition
} // namespace app::classes::types
