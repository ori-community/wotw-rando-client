#pragma once
#include <Modloader/app/structs/SqlTypeException.h>
#include <Modloader/app/structs/SqlTypeException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlTypeException {
        inline app::SqlTypeException__Class** type_info() {
            static app::SqlTypeException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlTypeException__Class**)(modloader::win::memory::resolve_rva(0x0472C380));
            }
            return cache;
        }
        inline app::SqlTypeException__Class* get_class() {
            return il2cpp::get_class<app::SqlTypeException__Class>(type_info(), "System.Data.SqlTypes", "SqlTypeException");
        }
        inline app::SqlTypeException* create() {
            return il2cpp::create_object<app::SqlTypeException>(get_class());
        }
    } // namespace SqlTypeException
} // namespace app::classes::types
