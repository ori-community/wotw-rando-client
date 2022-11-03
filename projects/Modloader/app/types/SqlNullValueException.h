#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlNullValueException {
        inline app::SqlNullValueException__Class** type_info = (app::SqlNullValueException__Class**)(modloader::win::memory::resolve_rva(0x0475DE78));
        inline app::SqlNullValueException__Class* get_class() {
            return il2cpp::get_class<app::SqlNullValueException__Class>(type_info, "System.Data.SqlTypes", "SqlNullValueException");
        }
        inline app::SqlNullValueException* create() {
            return il2cpp::create_object<app::SqlNullValueException>(get_class());
        }
    } // namespace SqlNullValueException
} // namespace app::classes::types
