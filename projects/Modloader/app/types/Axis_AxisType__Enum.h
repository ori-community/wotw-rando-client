#pragma once
#include <Modloader/app/structs/Axis_AxisType__Enum.h>
#include <Modloader/app/structs/Axis_AxisType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Axis_AxisType__Enum {
        inline app::Axis_AxisType__Enum__Class** type_info() {
            static app::Axis_AxisType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Axis_AxisType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04744908));
            }
            return cache;
        }
        inline app::Axis_AxisType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Axis_AxisType__Enum__Class>(type_info(), "MS.Internal.Xml.XPath", "Axis", "AxisType");
        }
        inline app::Axis_AxisType__Enum* create() {
            return il2cpp::create_object<app::Axis_AxisType__Enum>(get_class());
        }
    } // namespace Axis_AxisType__Enum
} // namespace app::classes::types
