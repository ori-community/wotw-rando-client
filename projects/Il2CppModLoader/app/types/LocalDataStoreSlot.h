#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalDataStoreSlot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocalDataStoreSlot__Class** type_info;
        inline app::LocalDataStoreSlot__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStoreSlot__Class>(type_info, "System", "LocalDataStoreSlot");
        }
        inline app::LocalDataStoreSlot* create() {
            return il2cpp::create_object<app::LocalDataStoreSlot>(get_class());
        }
        inline app::LocalDataStoreSlot__Array* create_array(int size) {
            return il2cpp::array_new<app::LocalDataStoreSlot__Array>(get_class(), size);
        }
    } // namespace LocalDataStoreSlot
} // namespace app::classes::types
