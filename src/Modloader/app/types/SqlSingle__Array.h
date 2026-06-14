#pragma once
#include <Modloader/app/structs/SqlSingle__Array.h>
#include <Modloader/app/structs/SqlSingle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlSingle__Array {
        inline app::SqlSingle__Array__Class** type_info() {
            static app::SqlSingle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlSingle__Array__Class**)(modloader::win::memory::resolve_rva(0x04711240));
            }
            return cache;
        }
        inline app::SqlSingle__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlSingle__Array__Class>(type_info(), "System.Data.SqlTypes", "SqlSingle[]");
        }
        inline app::SqlSingle__Array* create() {
            return il2cpp::create_object<app::SqlSingle__Array>(get_class());
        }
    } // namespace SqlSingle__Array
} // namespace app::classes::types
