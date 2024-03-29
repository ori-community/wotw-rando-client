#pragma once
#include <Modloader/app/structs/SqlInt16__Array.h>
#include <Modloader/app/structs/SqlInt16__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlInt16__Array {
        inline app::SqlInt16__Array__Class** type_info() {
            static app::SqlInt16__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlInt16__Array__Class**)(modloader::win::memory::resolve_rva(0x0470A058));
            }
            return cache;
        }
        inline app::SqlInt16__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlInt16__Array__Class>(type_info(), "System.Data.SqlTypes", "SqlInt16[]");
        }
        inline app::SqlInt16__Array* create() {
            return il2cpp::create_object<app::SqlInt16__Array>(get_class());
        }
    } // namespace SqlInt16__Array
} // namespace app::classes::types
