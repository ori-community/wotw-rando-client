#pragma once
#include <Modloader/app/structs/HealthBarPositioning_PositionType__Enum.h>
#include <Modloader/app/structs/HealthBarPositioning_PositionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HealthBarPositioning_PositionType__Enum {
        inline app::HealthBarPositioning_PositionType__Enum__Class** type_info() {
            static app::HealthBarPositioning_PositionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HealthBarPositioning_PositionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HealthBarPositioning_PositionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HealthBarPositioning_PositionType__Enum__Class>(type_info(), "", "HealthBarPositioning", "PositionType");
        }
        inline app::HealthBarPositioning_PositionType__Enum* create() {
            return il2cpp::create_object<app::HealthBarPositioning_PositionType__Enum>(get_class());
        }
    } // namespace HealthBarPositioning_PositionType__Enum
} // namespace app::classes::types
