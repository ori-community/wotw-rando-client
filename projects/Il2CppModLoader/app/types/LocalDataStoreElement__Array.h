#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalDataStoreElement__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocalDataStoreElement__Array__Class** type_info;
        inline app::LocalDataStoreElement__Array__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStoreElement__Array__Class>(type_info, "System", "LocalDataStoreElement[]");
        }
        inline app::LocalDataStoreElement__Array* create() {
            return il2cpp::create_object<app::LocalDataStoreElement__Array>(get_class());
        }
    } // namespace LocalDataStoreElement__Array
} // namespace app::classes::types
