#pragma once
#include <Modloader/app/structs/SqlBoolean__Array.h>
#include <Modloader/app/structs/SqlBoolean__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlBoolean__Array {
        inline app::SqlBoolean__Array__Class** type_info() {
            static app::SqlBoolean__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlBoolean__Array__Class**)(modloader::win::memory::resolve_rva(0x047147D8));
            }
            return cache;
        }
        inline app::SqlBoolean__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlBoolean__Array__Class>(type_info(), "System.Data.SqlTypes", "SqlBoolean[]");
        }
        inline app::SqlBoolean__Array* create() {
            return il2cpp::create_object<app::SqlBoolean__Array>(get_class());
        }
    } // namespace SqlBoolean__Array
} // namespace app::classes::types
