#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataRelation__Class.h>
#include <Modloader/app/structs/DataRelation.h>
#include <Modloader/app/structs/DataRelation__Array.h>

namespace app::classes::types {
    namespace DataRelation {
        inline app::DataRelation__Class** type_info = (app::DataRelation__Class**)(modloader::win::memory::resolve_rva(0x0472F728));
        inline app::DataRelation__Class* get_class() {
            return il2cpp::get_class<app::DataRelation__Class>(type_info, "System.Data", "DataRelation");
        }
        inline app::DataRelation* create() {
            return il2cpp::create_object<app::DataRelation>(get_class());
        }
        inline app::DataRelation__Array* create_array(int size) {
            return il2cpp::array_new<app::DataRelation__Array>(get_class(), size);
        }
        inline app::DataRelation__Array* create_array(const std::vector<app::DataRelation*>& items) {
            return il2cpp::array_new<app::DataRelation__Array>(get_class(), items);
        }
    } // namespace DataRelation
} // namespace app::classes::types
