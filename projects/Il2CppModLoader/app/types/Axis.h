#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Axis {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Axis__Class** type_info;
        inline app::Axis__Class* get_class() {
            return il2cpp::get_class<app::Axis__Class>(type_info, "MS.Internal.Xml.XPath", "Axis");
        }
        inline app::Axis* create() {
            return il2cpp::create_object<app::Axis>(get_class());
        }
    } // namespace Axis
} // namespace app::classes::types
