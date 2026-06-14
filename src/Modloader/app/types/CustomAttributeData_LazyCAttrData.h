#pragma once
#include <Modloader/app/structs/CustomAttributeData_LazyCAttrData.h>
#include <Modloader/app/structs/CustomAttributeData_LazyCAttrData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomAttributeData_LazyCAttrData {
        inline app::CustomAttributeData_LazyCAttrData__Class** type_info() {
            static app::CustomAttributeData_LazyCAttrData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CustomAttributeData_LazyCAttrData__Class**)(modloader::win::memory::resolve_rva(0x04758DD8));
            }
            return cache;
        }
        inline app::CustomAttributeData_LazyCAttrData__Class* get_class() {
            return il2cpp::get_nested_class<app::CustomAttributeData_LazyCAttrData__Class>(type_info(), "System.Reflection", "CustomAttributeData", "LazyCAttrData");
        }
        inline app::CustomAttributeData_LazyCAttrData* create() {
            return il2cpp::create_object<app::CustomAttributeData_LazyCAttrData>(get_class());
        }
    } // namespace CustomAttributeData_LazyCAttrData
} // namespace app::classes::types
