#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
