#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArrayList_IListWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArrayList_IListWrapper__Class** type_info;
        inline app::ArrayList_IListWrapper__Class* get_class() {
            return il2cpp::get_nested_class<app::ArrayList_IListWrapper__Class>(type_info, "System.Collections", "ArrayList", "IListWrapper");
        }
        inline app::ArrayList_IListWrapper* create() {
            return il2cpp::create_object<app::ArrayList_IListWrapper>(get_class());
        }
    } // namespace ArrayList_IListWrapper
} // namespace app::classes::types
