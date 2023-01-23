#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HealthBarPositioning_PositionType__Enum__Class.h>
#include <Modloader/app/structs/HealthBarPositioning_PositionType__Enum.h>

namespace app::classes::types {
    namespace HealthBarPositioning_PositionType__Enum {
        namespace {
            inline app::HealthBarPositioning_PositionType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HealthBarPositioning_PositionType__Enum__Class** type_info = &type_info_ref;
        inline app::HealthBarPositioning_PositionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HealthBarPositioning_PositionType__Enum__Class>(type_info, "", "HealthBarPositioning", "PositionType");
        }
        inline app::HealthBarPositioning_PositionType__Enum* create() {
            return il2cpp::create_object<app::HealthBarPositioning_PositionType__Enum>(get_class());
        }
    } // namespace HealthBarPositioning_PositionType__Enum
} // namespace app::classes::types
