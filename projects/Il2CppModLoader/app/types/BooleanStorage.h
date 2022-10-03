#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BooleanStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BooleanStorage__Class** type_info;
        inline app::BooleanStorage__Class* get_class() {
            return il2cpp::get_class<app::BooleanStorage__Class>(type_info, "System.Data.Common", "BooleanStorage");
        }
        inline app::BooleanStorage* create() {
            return il2cpp::create_object<app::BooleanStorage>(get_class());
        }
    } // namespace BooleanStorage
} // namespace app::classes::types
