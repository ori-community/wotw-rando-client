#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomAttributeData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CustomAttributeData__Class** type_info;
        inline app::CustomAttributeData__Class* get_class() {
            return il2cpp::get_class<app::CustomAttributeData__Class>(type_info, "System.Reflection", "CustomAttributeData");
        }
        inline app::CustomAttributeData* create() {
            return il2cpp::create_object<app::CustomAttributeData>(get_class());
        }
        inline app::CustomAttributeData__Array* create_array(int size) {
            return il2cpp::array_new<app::CustomAttributeData__Array>(get_class(), size);
        }
    } // namespace CustomAttributeData
} // namespace app::classes::types
