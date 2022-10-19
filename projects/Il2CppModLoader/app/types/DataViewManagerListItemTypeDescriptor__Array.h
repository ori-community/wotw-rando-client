#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataViewManagerListItemTypeDescriptor__Array {
        inline app::DataViewManagerListItemTypeDescriptor__Array__Class** type_info = (app::DataViewManagerListItemTypeDescriptor__Array__Class**)(modloader::win::memory::resolve_rva(0x0471FED8));
        inline app::DataViewManagerListItemTypeDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::DataViewManagerListItemTypeDescriptor__Array__Class>(type_info, "System.Data", "DataViewManagerListItemTypeDescriptor[]");
        }
        inline app::DataViewManagerListItemTypeDescriptor__Array* create() {
            return il2cpp::create_object<app::DataViewManagerListItemTypeDescriptor__Array>(get_class());
        }
    } // namespace DataViewManagerListItemTypeDescriptor__Array
} // namespace app::classes::types
