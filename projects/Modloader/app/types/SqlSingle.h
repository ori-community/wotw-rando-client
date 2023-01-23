#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlSingle__Class.h>
#include <Modloader/app/structs/SqlSingle.h>
#include <Modloader/app/structs/SqlSingle__Boxed.h>
#include <Modloader/app/structs/SqlSingle__Array.h>

namespace app::classes::types {
    namespace SqlSingle {
        inline app::SqlSingle__Class** type_info = (app::SqlSingle__Class**)(modloader::win::memory::resolve_rva(0x04705268));
        inline app::SqlSingle__Class* get_class() {
            return il2cpp::get_class<app::SqlSingle__Class>(type_info, "System.Data.SqlTypes", "SqlSingle");
        }
        inline app::SqlSingle* create() {
            return il2cpp::create_object<app::SqlSingle>(get_class());
        }
        inline app::SqlSingle__Boxed* box(app::SqlSingle value) {
            return il2cpp::box_value<app::SqlSingle__Boxed>(get_class(), value);
        }
        inline app::SqlSingle__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlSingle__Array>(get_class(), size);
        }
        inline app::SqlSingle__Array* create_array(const std::vector<app::SqlSingle>& items) {
            return il2cpp::array_new<app::SqlSingle__Array>(get_class(), items);
        }
    } // namespace SqlSingle
} // namespace app::classes::types
