#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ByteStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ByteStorage__Class** type_info;
        inline app::ByteStorage__Class* get_class() {
            return il2cpp::get_class<app::ByteStorage__Class>(type_info, "System.Data.Common", "ByteStorage");
        }
        inline app::ByteStorage* create() {
            return il2cpp::create_object<app::ByteStorage>(get_class());
        }
    } // namespace ByteStorage
} // namespace app::classes::types
