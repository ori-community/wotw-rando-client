#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlSingle__Array__Class.h>
#include <Modloader/app/structs/SqlSingle__Array.h>

namespace app::classes::types {
    namespace SqlSingle__Array {
        inline app::SqlSingle__Array__Class** type_info = (app::SqlSingle__Array__Class**)(modloader::win::memory::resolve_rva(0x04711240));
        inline app::SqlSingle__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlSingle__Array__Class>(type_info, "System.Data.SqlTypes", "SqlSingle[]");
        }
        inline app::SqlSingle__Array* create() {
            return il2cpp::create_object<app::SqlSingle__Array>(get_class());
        }
    } // namespace SqlSingle__Array
} // namespace app::classes::types
