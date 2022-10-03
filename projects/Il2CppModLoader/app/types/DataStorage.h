#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataStorage__Class** type_info;
        inline app::DataStorage__Class* get_class() {
            return il2cpp::get_class<app::DataStorage__Class>(type_info, "System.Data.Common", "DataStorage");
        }
        inline app::DataStorage* create() {
            return il2cpp::create_object<app::DataStorage>(get_class());
        }
    } // namespace DataStorage
} // namespace app::classes::types
