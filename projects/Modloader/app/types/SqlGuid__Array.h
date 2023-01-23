#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlGuid__Array__Class.h>
#include <Modloader/app/structs/SqlGuid__Array.h>

namespace app::classes::types {
    namespace SqlGuid__Array {
        inline app::SqlGuid__Array__Class** type_info = (app::SqlGuid__Array__Class**)(modloader::win::memory::resolve_rva(0x0471DD80));
        inline app::SqlGuid__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlGuid__Array__Class>(type_info, "System.Data.SqlTypes", "SqlGuid[]");
        }
        inline app::SqlGuid__Array* create() {
            return il2cpp::create_object<app::SqlGuid__Array>(get_class());
        }
    } // namespace SqlGuid__Array
} // namespace app::classes::types
