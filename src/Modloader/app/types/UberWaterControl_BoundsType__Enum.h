#pragma once
#include <Modloader/app/structs/UberWaterControl_BoundsType__Enum.h>
#include <Modloader/app/structs/UberWaterControl_BoundsType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberWaterControl_BoundsType__Enum {
        inline app::UberWaterControl_BoundsType__Enum__Class** type_info() {
            static app::UberWaterControl_BoundsType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberWaterControl_BoundsType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberWaterControl_BoundsType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterControl_BoundsType__Enum__Class>(type_info(), "", "UberWaterControl", "BoundsType");
        }
        inline app::UberWaterControl_BoundsType__Enum* create() {
            return il2cpp::create_object<app::UberWaterControl_BoundsType__Enum>(get_class());
        }
    } // namespace UberWaterControl_BoundsType__Enum
} // namespace app::classes::types
