#pragma once
#include <Modloader/app/structs/SqlNullValueException.h>
#include <Modloader/app/structs/SqlNullValueException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlNullValueException {
        inline app::SqlNullValueException__Class** type_info() {
            static app::SqlNullValueException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlNullValueException__Class**)(modloader::win::memory::resolve_rva(0x0475DE78));
            }
            return cache;
        }
        inline app::SqlNullValueException__Class* get_class() {
            return il2cpp::get_class<app::SqlNullValueException__Class>(type_info(), "System.Data.SqlTypes", "SqlNullValueException");
        }
        inline app::SqlNullValueException* create() {
            return il2cpp::create_object<app::SqlNullValueException>(get_class());
        }
    } // namespace SqlNullValueException
} // namespace app::classes::types
