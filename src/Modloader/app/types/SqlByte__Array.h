#pragma once
#include <Modloader/app/structs/SqlByte__Array.h>
#include <Modloader/app/structs/SqlByte__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlByte__Array {
        inline app::SqlByte__Array__Class** type_info() {
            static app::SqlByte__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlByte__Array__Class**)(modloader::win::memory::resolve_rva(0x047241E0));
            }
            return cache;
        }
        inline app::SqlByte__Array__Class* get_class() {
            return il2cpp::get_class<app::SqlByte__Array__Class>(type_info(), "System.Data.SqlTypes", "SqlByte[]");
        }
        inline app::SqlByte__Array* create() {
            return il2cpp::create_object<app::SqlByte__Array>(get_class());
        }
    } // namespace SqlByte__Array
} // namespace app::classes::types
