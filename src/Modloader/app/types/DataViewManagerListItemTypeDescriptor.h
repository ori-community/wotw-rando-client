#pragma once
#include <Modloader/app/structs/DataViewManagerListItemTypeDescriptor.h>
#include <Modloader/app/structs/DataViewManagerListItemTypeDescriptor__Array.h>
#include <Modloader/app/structs/DataViewManagerListItemTypeDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataViewManagerListItemTypeDescriptor {
        inline app::DataViewManagerListItemTypeDescriptor__Class** type_info() {
            static app::DataViewManagerListItemTypeDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataViewManagerListItemTypeDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0475BD78));
            }
            return cache;
        }
        inline app::DataViewManagerListItemTypeDescriptor__Class* get_class() {
            return il2cpp::get_class<app::DataViewManagerListItemTypeDescriptor__Class>(type_info(), "System.Data", "DataViewManagerListItemTypeDescriptor");
        }
        inline app::DataViewManagerListItemTypeDescriptor* create() {
            return il2cpp::create_object<app::DataViewManagerListItemTypeDescriptor>(get_class());
        }
        inline app::DataViewManagerListItemTypeDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::DataViewManagerListItemTypeDescriptor__Array>(get_class(), size);
        }
        inline app::DataViewManagerListItemTypeDescriptor__Array* create_array(const std::vector<app::DataViewManagerListItemTypeDescriptor*>& items) {
            return il2cpp::array_new<app::DataViewManagerListItemTypeDescriptor__Array>(get_class(), items);
        }
    } // namespace DataViewManagerListItemTypeDescriptor
} // namespace app::classes::types
