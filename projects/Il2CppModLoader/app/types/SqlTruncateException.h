#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlTruncateException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlTruncateException__Class** type_info;
        inline app::SqlTruncateException__Class* get_class() {
            return il2cpp::get_class<app::SqlTruncateException__Class>(type_info, "System.Data.SqlTypes", "SqlTruncateException");
        }
        inline app::SqlTruncateException* create() {
            return il2cpp::create_object<app::SqlTruncateException>(get_class());
        }
    } // namespace SqlTruncateException
} // namespace app::classes::types
