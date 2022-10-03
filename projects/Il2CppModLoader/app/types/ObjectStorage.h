#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectStorage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectStorage__Class** type_info;
        inline app::ObjectStorage__Class* get_class() {
            return il2cpp::get_class<app::ObjectStorage__Class>(type_info, "System.Data.Common", "ObjectStorage");
        }
        inline app::ObjectStorage* create() {
            return il2cpp::create_object<app::ObjectStorage>(get_class());
        }
    } // namespace ObjectStorage
} // namespace app::classes::types
