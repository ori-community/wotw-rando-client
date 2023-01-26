#pragma once
#include <Modloader/app/structs/DrillZone_DrillState__Enum.h>
#include <Modloader/app/structs/DrillZone_DrillState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrillZone_DrillState__Enum {
        inline app::DrillZone_DrillState__Enum__Class** type_info() {
            static app::DrillZone_DrillState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrillZone_DrillState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrillZone_DrillState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DrillZone_DrillState__Enum__Class>(type_info(), "", "DrillZone", "DrillState");
        }
        inline app::DrillZone_DrillState__Enum* create() {
            return il2cpp::create_object<app::DrillZone_DrillState__Enum>(get_class());
        }
    } // namespace DrillZone_DrillState__Enum
} // namespace app::classes::types
