#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlTruncateException__Class.h>
#include <Modloader/app/structs/SqlTruncateException.h>

namespace app::classes::types {
    namespace SqlTruncateException {
        inline app::SqlTruncateException__Class** type_info = (app::SqlTruncateException__Class**)(modloader::win::memory::resolve_rva(0x04796448));
        inline app::SqlTruncateException__Class* get_class() {
            return il2cpp::get_class<app::SqlTruncateException__Class>(type_info, "System.Data.SqlTypes", "SqlTruncateException");
        }
        inline app::SqlTruncateException* create() {
            return il2cpp::create_object<app::SqlTruncateException>(get_class());
        }
    } // namespace SqlTruncateException
} // namespace app::classes::types
