#pragma once
#include <Modloader/app/structs/SqlString__Array.h>
#include <Modloader/app/structs/SqlString__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlString__Array {
        inline app::SqlString__Array__Class** type_info() {
            static app::SqlString__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlString__Array__Class**)(modloader::win::memory::resolve_rva(0x04743468));
            }
            return cache;
        }
        inline app::SqlString__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlString__Array__Class>(type_info(), "System.Data.SqlTypes", "SqlString[]");
        }
        inline app::SqlString__Array* create() {
            return il2cpp::create_object<app::SqlString__Array>(get_class());
        }
    } // namespace SqlString__Array
} // namespace app::classes::types
