#pragma once
#include <Modloader/app/structs/DataRowView__Array.h>
#include <Modloader/app/structs/DataRowView__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataRowView__Array {
        inline app::DataRowView__Array__Class** type_info() {
            static app::DataRowView__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataRowView__Array__Class**)(modloader::win::memory::resolve_rva(0x04716290));
            }
            return cache;
        }
        inline app::DataRowView__Array__Class* get_class() {
            return il2cpp::get_class<app::DataRowView__Array__Class>(type_info(), "System.Data", "DataRowView[]");
        }
        inline app::DataRowView__Array* create() {
            return il2cpp::create_object<app::DataRowView__Array>(get_class());
        }
    } // namespace DataRowView__Array
} // namespace app::classes::types
