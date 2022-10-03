#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeOffsetStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DateTimeOffsetStorage__Class** type_info;
        inline app::DateTimeOffsetStorage__Class* get_class() {
            return il2cpp::get_class<app::DateTimeOffsetStorage__Class>(type_info, "System.Data.Common", "DateTimeOffsetStorage");
        }
        inline app::DateTimeOffsetStorage* create() {
            return il2cpp::create_object<app::DateTimeOffsetStorage>(get_class());
        }
    } // namespace DateTimeOffsetStorage
} // namespace app::classes::types
