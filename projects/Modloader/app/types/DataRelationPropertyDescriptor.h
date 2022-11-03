#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataRelationPropertyDescriptor {
        inline app::DataRelationPropertyDescriptor__Class** type_info = (app::DataRelationPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0474E398));
        inline app::DataRelationPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::DataRelationPropertyDescriptor__Class>(type_info, "System.Data", "DataRelationPropertyDescriptor");
        }
        inline app::DataRelationPropertyDescriptor* create() {
            return il2cpp::create_object<app::DataRelationPropertyDescriptor>(get_class());
        }
    } // namespace DataRelationPropertyDescriptor
} // namespace app::classes::types
