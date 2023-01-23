#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlGuid__Class.h>
#include <Modloader/app/structs/SqlGuid.h>
#include <Modloader/app/structs/SqlGuid__Boxed.h>
#include <Modloader/app/structs/SqlGuid__Array.h>

namespace app::classes::types {
    namespace SqlGuid {
        inline app::SqlGuid__Class** type_info = (app::SqlGuid__Class**)(modloader::win::memory::resolve_rva(0x04740000));
        inline app::SqlGuid__Class* get_class() {
            return il2cpp::get_class<app::SqlGuid__Class>(type_info, "System.Data.SqlTypes", "SqlGuid");
        }
        inline app::SqlGuid* create() {
            return il2cpp::create_object<app::SqlGuid>(get_class());
        }
        inline app::SqlGuid__Boxed* box(app::SqlGuid value) {
            return il2cpp::box_value<app::SqlGuid__Boxed>(get_class(), value);
        }
        inline app::SqlGuid__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlGuid__Array>(get_class(), size);
        }
        inline app::SqlGuid__Array* create_array(const std::vector<app::SqlGuid>& items) {
            return il2cpp::array_new<app::SqlGuid__Array>(get_class(), items);
        }
    } // namespace SqlGuid
} // namespace app::classes::types
