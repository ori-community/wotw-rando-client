#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterControl_BoundsType__Enum {
        namespace {
            app::UberWaterControl_BoundsType__Enum__Class* type_info_ref = nullptr;
        }
        app::UberWaterControl_BoundsType__Enum__Class** type_info = &type_info_ref;
        inline app::UberWaterControl_BoundsType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterControl_BoundsType__Enum__Class>(type_info, "", "UberWaterControl", "BoundsType");
        }
        inline app::UberWaterControl_BoundsType__Enum* create() {
            return il2cpp::create_object<app::UberWaterControl_BoundsType__Enum>(get_class());
        }
    } // namespace UberWaterControl_BoundsType__Enum
} // namespace app::classes::types
