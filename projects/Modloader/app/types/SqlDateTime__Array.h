#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlDateTime__Array__Class.h>
#include <Modloader/app/structs/SqlDateTime__Array.h>

namespace app::classes::types {
    namespace SqlDateTime__Array {
        inline app::SqlDateTime__Array__Class** type_info = (app::SqlDateTime__Array__Class**)(modloader::win::memory::resolve_rva(0x047310E0));
        inline app::SqlDateTime__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlDateTime__Array__Class>(type_info, "System.Data.SqlTypes", "SqlDateTime[]");
        }
        inline app::SqlDateTime__Array* create() {
            return il2cpp::create_object<app::SqlDateTime__Array>(get_class());
        }
    } // namespace SqlDateTime__Array
} // namespace app::classes::types
