#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsXboxSeriesXCondition {
        namespace {
            app::IsXboxSeriesXCondition__Class* type_info_ref = nullptr;
        }
        app::IsXboxSeriesXCondition__Class** type_info = &type_info_ref;
        inline app::IsXboxSeriesXCondition__Class* get_class() {
            return il2cpp::get_class<app::IsXboxSeriesXCondition__Class>(type_info, "", "IsXboxSeriesXCondition");
        }
        inline app::IsXboxSeriesXCondition* create() {
            return il2cpp::create_object<app::IsXboxSeriesXCondition>(get_class());
        }
    } // namespace IsXboxSeriesXCondition
} // namespace app::classes::types
