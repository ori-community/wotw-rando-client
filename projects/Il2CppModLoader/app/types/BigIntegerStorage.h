#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BigIntegerStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BigIntegerStorage__Class** type_info;
        inline app::BigIntegerStorage__Class* get_class() {
            return il2cpp::get_class<app::BigIntegerStorage__Class>(type_info, "System.Data.Common", "BigIntegerStorage");
        }
        inline app::BigIntegerStorage* create() {
            return il2cpp::create_object<app::BigIntegerStorage>(get_class());
        }
    } // namespace BigIntegerStorage
} // namespace app::classes::types
