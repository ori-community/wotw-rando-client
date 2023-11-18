#pragma once
#include <Modloader/app/structs/SqlDouble__Array.h>
#include <Modloader/app/structs/SqlDouble__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlDouble__Array {
        inline app::SqlDouble__Array__Class** type_info() {
            static app::SqlDouble__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlDouble__Array__Class**)(modloader::win::memory::resolve_rva(0x04734468));
            }
            return cache;
        }
        inline app::SqlDouble__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlDouble__Array__Class>(type_info(), "System.Data.SqlTypes", "SqlDouble[]");
        }
        inline app::SqlDouble__Array* create() {
            return il2cpp::create_object<app::SqlDouble__Array>(get_class());
        }
    } // namespace SqlDouble__Array
} // namespace app::classes::types
