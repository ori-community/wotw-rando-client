#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AxisStack {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AxisStack__Class** type_info;
        inline app::AxisStack__Class* get_class() {
            return il2cpp::get_class<app::AxisStack__Class>(type_info, "System.Xml.Schema", "AxisStack");
        }
        inline app::AxisStack* create() {
            return il2cpp::create_object<app::AxisStack>(get_class());
        }
    } // namespace AxisStack
} // namespace app::classes::types
