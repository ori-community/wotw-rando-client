#pragma once
#include <Modloader/app/structs/SqlInt64__Array.h>
#include <Modloader/app/structs/SqlInt64__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlInt64__Array {
        inline app::SqlInt64__Array__Class** type_info() {
            static app::SqlInt64__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlInt64__Array__Class**)(modloader::win::memory::resolve_rva(0x047197A0));
            }
            return cache;
        }
        inline app::SqlInt64__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlInt64__Array__Class>(type_info(), "System.Data.SqlTypes", "SqlInt64[]");
        }
        inline app::SqlInt64__Array* create() {
            return il2cpp::create_object<app::SqlInt64__Array>(get_class());
        }
    } // namespace SqlInt64__Array
} // namespace app::classes::types
