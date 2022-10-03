#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArrayList_ReadOnlyArrayList {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArrayList_ReadOnlyArrayList__Class** type_info;
        inline app::ArrayList_ReadOnlyArrayList__Class* get_class() {
            return il2cpp::get_nested_class<app::ArrayList_ReadOnlyArrayList__Class>(type_info, "System.Collections", "ArrayList", "ReadOnlyArrayList");
        }
        inline app::ArrayList_ReadOnlyArrayList* create() {
            return il2cpp::create_object<app::ArrayList_ReadOnlyArrayList>(get_class());
        }
    } // namespace ArrayList_ReadOnlyArrayList
} // namespace app::classes::types
