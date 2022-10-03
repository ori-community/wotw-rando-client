#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesignerSerializationVisibilityAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DesignerSerializationVisibilityAttribute__Class** type_info;
        inline app::DesignerSerializationVisibilityAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignerSerializationVisibilityAttribute__Class>(type_info, "System.ComponentModel", "DesignerSerializationVisibilityAttribute");
        }
        inline app::DesignerSerializationVisibilityAttribute* create() {
            return il2cpp::create_object<app::DesignerSerializationVisibilityAttribute>(get_class());
        }
    } // namespace DesignerSerializationVisibilityAttribute
} // namespace app::classes::types
