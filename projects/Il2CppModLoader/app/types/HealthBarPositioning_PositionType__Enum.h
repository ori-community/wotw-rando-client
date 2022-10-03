#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HealthBarPositioning_PositionType__Enum {
        namespace {
            app::HealthBarPositioning_PositionType__Enum__Class* type_info_ref = nullptr;
        }
        app::HealthBarPositioning_PositionType__Enum__Class** type_info = &type_info_ref;
        inline app::HealthBarPositioning_PositionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HealthBarPositioning_PositionType__Enum__Class>(type_info, "", "HealthBarPositioning", "PositionType");
        }
        inline app::HealthBarPositioning_PositionType__Enum* create() {
            return il2cpp::create_object<app::HealthBarPositioning_PositionType__Enum>(get_class());
        }
    } // namespace HealthBarPositioning_PositionType__Enum
} // namespace app::classes::types
