#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SingleStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SingleStorage__Class** type_info;
        inline app::SingleStorage__Class* get_class() {
            return il2cpp::get_class<app::SingleStorage__Class>(type_info, "System.Data.Common", "SingleStorage");
        }
        inline app::SingleStorage* create() {
            return il2cpp::create_object<app::SingleStorage>(get_class());
        }
    } // namespace SingleStorage
} // namespace app::classes::types
