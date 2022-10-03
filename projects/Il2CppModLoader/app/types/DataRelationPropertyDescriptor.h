#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataRelationPropertyDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataRelationPropertyDescriptor__Class** type_info;
        inline app::DataRelationPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::DataRelationPropertyDescriptor__Class>(type_info, "System.Data", "DataRelationPropertyDescriptor");
        }
        inline app::DataRelationPropertyDescriptor* create() {
            return il2cpp::create_object<app::DataRelationPropertyDescriptor>(get_class());
        }
    } // namespace DataRelationPropertyDescriptor
} // namespace app::classes::types
