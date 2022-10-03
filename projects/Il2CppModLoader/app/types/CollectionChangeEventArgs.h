#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollectionChangeEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CollectionChangeEventArgs__Class** type_info;
        inline app::CollectionChangeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::CollectionChangeEventArgs__Class>(type_info, "System.ComponentModel", "CollectionChangeEventArgs");
        }
        inline app::CollectionChangeEventArgs* create() {
            return il2cpp::create_object<app::CollectionChangeEventArgs>(get_class());
        }
    } // namespace CollectionChangeEventArgs
} // namespace app::classes::types
