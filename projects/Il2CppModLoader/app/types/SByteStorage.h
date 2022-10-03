#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SByteStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SByteStorage__Class** type_info;
        inline app::SByteStorage__Class* get_class() {
            return il2cpp::get_class<app::SByteStorage__Class>(type_info, "System.Data.Common", "SByteStorage");
        }
        inline app::SByteStorage* create() {
            return il2cpp::create_object<app::SByteStorage>(get_class());
        }
    } // namespace SByteStorage
} // namespace app::classes::types
