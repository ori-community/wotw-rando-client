#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlInt64__Class.h>
#include <Modloader/app/structs/SqlInt64.h>
#include <Modloader/app/structs/SqlInt64__Boxed.h>
#include <Modloader/app/structs/SqlInt64__Array.h>

namespace app::classes::types {
    namespace SqlInt64 {
        inline app::SqlInt64__Class** type_info = (app::SqlInt64__Class**)(modloader::win::memory::resolve_rva(0x04713D00));
        inline app::SqlInt64__Class* get_class() {
            return il2cpp::get_class<app::SqlInt64__Class>(type_info, "System.Data.SqlTypes", "SqlInt64");
        }
        inline app::SqlInt64* create() {
            return il2cpp::create_object<app::SqlInt64>(get_class());
        }
        inline app::SqlInt64__Boxed* box(app::SqlInt64 value) {
            return il2cpp::box_value<app::SqlInt64__Boxed>(get_class(), value);
        }
        inline app::SqlInt64__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlInt64__Array>(get_class(), size);
        }
        inline app::SqlInt64__Array* create_array(const std::vector<app::SqlInt64>& items) {
            return il2cpp::array_new<app::SqlInt64__Array>(get_class(), items);
        }
    } // namespace SqlInt64
} // namespace app::classes::types
