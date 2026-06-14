#pragma once
#include <Modloader/app/structs/DataViewManagerListItemTypeDescriptor__Array.h>
#include <Modloader/app/structs/DataViewManagerListItemTypeDescriptor__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataViewManagerListItemTypeDescriptor__Array {
        inline app::DataViewManagerListItemTypeDescriptor__Array__Class** type_info() {
            static app::DataViewManagerListItemTypeDescriptor__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataViewManagerListItemTypeDescriptor__Array__Class**)(modloader::win::memory::resolve_rva(0x0471FED8));
            }
            return cache;
        }
        inline app::DataViewManagerListItemTypeDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::DataViewManagerListItemTypeDescriptor__Array__Class>(type_info(), "System.Data", "DataViewManagerListItemTypeDescriptor[]");
        }
        inline app::DataViewManagerListItemTypeDescriptor__Array* create() {
            return il2cpp::create_object<app::DataViewManagerListItemTypeDescriptor__Array>(get_class());
        }
    } // namespace DataViewManagerListItemTypeDescriptor__Array
} // namespace app::classes::types
