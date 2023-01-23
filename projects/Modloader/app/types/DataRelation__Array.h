#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataRelation__Array__Class.h>
#include <Modloader/app/structs/DataRelation__Array.h>

namespace app::classes::types {
    namespace DataRelation__Array {
        inline app::DataRelation__Array__Class** type_info = (app::DataRelation__Array__Class**)(modloader::win::memory::resolve_rva(0x0476F728));
        inline app::DataRelation__Array__Class* get_class() {
            return il2cpp::get_class<app::DataRelation__Array__Class>(type_info, "System.Data", "DataRelation[]");
        }
        inline app::DataRelation__Array* create() {
            return il2cpp::create_object<app::DataRelation__Array>(get_class());
        }
    } // namespace DataRelation__Array
} // namespace app::classes::types
