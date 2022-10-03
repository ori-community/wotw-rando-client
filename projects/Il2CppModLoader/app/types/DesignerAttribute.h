#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesignerAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DesignerAttribute__Class** type_info;
        inline app::DesignerAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignerAttribute__Class>(type_info, "System.ComponentModel", "DesignerAttribute");
        }
        inline app::DesignerAttribute* create() {
            return il2cpp::create_object<app::DesignerAttribute>(get_class());
        }
    } // namespace DesignerAttribute
} // namespace app::classes::types
