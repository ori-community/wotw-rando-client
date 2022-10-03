#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AxisElement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AxisElement__Class** type_info;
        inline app::AxisElement__Class* get_class() {
            return il2cpp::get_class<app::AxisElement__Class>(type_info, "System.Xml.Schema", "AxisElement");
        }
        inline app::AxisElement* create() {
            return il2cpp::create_object<app::AxisElement>(get_class());
        }
    } // namespace AxisElement
} // namespace app::classes::types
