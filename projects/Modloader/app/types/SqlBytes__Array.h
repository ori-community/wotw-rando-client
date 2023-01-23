#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlBytes__Array__Class.h>
#include <Modloader/app/structs/SqlBytes__Array.h>

namespace app::classes::types {
    namespace SqlBytes__Array {
        inline app::SqlBytes__Array__Class** type_info = (app::SqlBytes__Array__Class**)(modloader::win::memory::resolve_rva(0x04752EF0));
        inline app::SqlBytes__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlBytes__Array__Class>(type_info, "System.Data.SqlTypes", "SqlBytes[]");
        }
        inline app::SqlBytes__Array* create() {
            return il2cpp::create_object<app::SqlBytes__Array>(get_class());
        }
    } // namespace SqlBytes__Array
} // namespace app::classes::types
