#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SqlCharsStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SqlCharsStorage__Class** type_info;
        inline app::SqlCharsStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlCharsStorage__Class>(type_info, "System.Data.Common", "SqlCharsStorage");
        }
        inline app::SqlCharsStorage* create() {
            return il2cpp::create_object<app::SqlCharsStorage>(get_class());
        }
    } // namespace SqlCharsStorage
} // namespace app::classes::types
