#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomAttributeData_LazyCAttrData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CustomAttributeData_LazyCAttrData__Class** type_info;
        inline app::CustomAttributeData_LazyCAttrData__Class* get_class() {
            return il2cpp::get_nested_class<app::CustomAttributeData_LazyCAttrData__Class>(type_info, "System.Reflection", "CustomAttributeData", "LazyCAttrData");
        }
        inline app::CustomAttributeData_LazyCAttrData* create() {
            return il2cpp::create_object<app::CustomAttributeData_LazyCAttrData>(get_class());
        }
    } // namespace CustomAttributeData_LazyCAttrData
} // namespace app::classes::types
