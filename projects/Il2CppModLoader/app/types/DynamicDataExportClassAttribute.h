#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicDataExportClassAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicDataExportClassAttribute__Class** type_info;
        inline app::DynamicDataExportClassAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicDataExportClassAttribute__Class>(type_info, "Moon", "DynamicDataExportClassAttribute");
        }
        inline app::DynamicDataExportClassAttribute* create() {
            return il2cpp::create_object<app::DynamicDataExportClassAttribute>(get_class());
        }
    } // namespace DynamicDataExportClassAttribute
} // namespace app::classes::types
