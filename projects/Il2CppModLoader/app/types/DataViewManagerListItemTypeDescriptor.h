#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataViewManagerListItemTypeDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataViewManagerListItemTypeDescriptor__Class** type_info;
        inline app::DataViewManagerListItemTypeDescriptor__Class* get_class() {
            return il2cpp::get_class<app::DataViewManagerListItemTypeDescriptor__Class>(type_info, "System.Data", "DataViewManagerListItemTypeDescriptor");
        }
        inline app::DataViewManagerListItemTypeDescriptor* create() {
            return il2cpp::create_object<app::DataViewManagerListItemTypeDescriptor>(get_class());
        }
        inline app::DataViewManagerListItemTypeDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::DataViewManagerListItemTypeDescriptor__Array>(get_class(), size);
        }
    } // namespace DataViewManagerListItemTypeDescriptor
} // namespace app::classes::types
