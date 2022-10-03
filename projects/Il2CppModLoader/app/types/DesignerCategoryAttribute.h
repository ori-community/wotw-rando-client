#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesignerCategoryAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DesignerCategoryAttribute__Class** type_info;
        inline app::DesignerCategoryAttribute__Class* get_class() {
            return il2cpp::get_class<app::DesignerCategoryAttribute__Class>(type_info, "System.ComponentModel", "DesignerCategoryAttribute");
        }
        inline app::DesignerCategoryAttribute* create() {
            return il2cpp::create_object<app::DesignerCategoryAttribute>(get_class());
        }
    } // namespace DesignerCategoryAttribute
} // namespace app::classes::types
