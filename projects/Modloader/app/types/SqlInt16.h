#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlInt16__Class.h>
#include <Modloader/app/structs/SqlInt16.h>
#include <Modloader/app/structs/SqlInt16__Boxed.h>
#include <Modloader/app/structs/SqlInt16__Array.h>

namespace app::classes::types {
    namespace SqlInt16 {
        inline app::SqlInt16__Class** type_info = (app::SqlInt16__Class**)(modloader::win::memory::resolve_rva(0x0478D820));
        inline app::SqlInt16__Class* get_class() {
            return il2cpp::get_class<app::SqlInt16__Class>(type_info, "System.Data.SqlTypes", "SqlInt16");
        }
        inline app::SqlInt16* create() {
            return il2cpp::create_object<app::SqlInt16>(get_class());
        }
        inline app::SqlInt16__Boxed* box(app::SqlInt16 value) {
            return il2cpp::box_value<app::SqlInt16__Boxed>(get_class(), value);
        }
        inline app::SqlInt16__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlInt16__Array>(get_class(), size);
        }
        inline app::SqlInt16__Array* create_array(const std::vector<app::SqlInt16>& items) {
            return il2cpp::array_new<app::SqlInt16__Array>(get_class(), items);
        }
    } // namespace SqlInt16
} // namespace app::classes::types
