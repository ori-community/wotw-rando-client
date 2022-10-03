#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlDoubleStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlDoubleStorage__Class** type_info;
        inline app::SqlDoubleStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlDoubleStorage__Class>(type_info, "System.Data.Common", "SqlDoubleStorage");
        }
        inline app::SqlDoubleStorage* create() {
            return il2cpp::create_object<app::SqlDoubleStorage>(get_class());
        }
    } // namespace SqlDoubleStorage
} // namespace app::classes::types
