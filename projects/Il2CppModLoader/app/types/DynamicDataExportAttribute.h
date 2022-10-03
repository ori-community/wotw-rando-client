#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicDataExportAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicDataExportAttribute__Class** type_info;
        inline app::DynamicDataExportAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicDataExportAttribute__Class>(type_info, "Moon", "DynamicDataExportAttribute");
        }
        inline app::DynamicDataExportAttribute* create() {
            return il2cpp::create_object<app::DynamicDataExportAttribute>(get_class());
        }
    } // namespace DynamicDataExportAttribute
} // namespace app::classes::types
