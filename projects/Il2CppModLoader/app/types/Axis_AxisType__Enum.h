#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Axis_AxisType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Axis_AxisType__Enum__Class** type_info;
        inline app::Axis_AxisType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Axis_AxisType__Enum__Class>(type_info, "MS.Internal.Xml.XPath", "Axis", "AxisType");
        }
        inline app::Axis_AxisType__Enum* create() {
            return il2cpp::create_object<app::Axis_AxisType__Enum>(get_class());
        }
    } // namespace Axis_AxisType__Enum
} // namespace app::classes::types
