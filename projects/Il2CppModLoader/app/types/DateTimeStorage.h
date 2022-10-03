#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DateTimeStorage__Class** type_info;
        inline app::DateTimeStorage__Class* get_class() {
            return il2cpp::get_class<app::DateTimeStorage__Class>(type_info, "System.Data.Common", "DateTimeStorage");
        }
        inline app::DateTimeStorage* create() {
            return il2cpp::create_object<app::DateTimeStorage>(get_class());
        }
    } // namespace DateTimeStorage
} // namespace app::classes::types
