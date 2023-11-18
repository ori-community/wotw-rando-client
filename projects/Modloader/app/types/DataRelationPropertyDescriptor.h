#pragma once
#include <Modloader/app/structs/DataRelationPropertyDescriptor.h>
#include <Modloader/app/structs/DataRelationPropertyDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataRelationPropertyDescriptor {
        inline app::DataRelationPropertyDescriptor__Class** type_info() {
            static app::DataRelationPropertyDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataRelationPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0474E398));
            }
            return cache;
        }
        inline app::DataRelationPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::DataRelationPropertyDescriptor__Class>(type_info(), "System.Data", "DataRelationPropertyDescriptor");
        }
        inline app::DataRelationPropertyDescriptor* create() {
            return il2cpp::create_object<app::DataRelationPropertyDescriptor>(get_class());
        }
    } // namespace DataRelationPropertyDescriptor
} // namespace app::classes::types
