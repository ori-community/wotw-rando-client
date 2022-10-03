#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecimalStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecimalStorage__Class** type_info;
        inline app::DecimalStorage__Class* get_class() {
            return il2cpp::get_class<app::DecimalStorage__Class>(type_info, "System.Data.Common", "DecimalStorage");
        }
        inline app::DecimalStorage* create() {
            return il2cpp::create_object<app::DecimalStorage>(get_class());
        }
    } // namespace DecimalStorage
} // namespace app::classes::types
