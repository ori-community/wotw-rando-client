#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DBNull {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DBNull__Class** type_info;
        inline app::DBNull__Class* get_class() {
            return il2cpp::get_class<app::DBNull__Class>(type_info, "System", "DBNull");
        }
        inline app::DBNull* create() {
            return il2cpp::create_object<app::DBNull>(get_class());
        }
    } // namespace DBNull
} // namespace app::classes::types
