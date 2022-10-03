#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Currency__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Currency__Enum__Class** type_info;
        inline app::Currency__Enum__Class* get_class() {
            return il2cpp::get_class<app::Currency__Enum__Class>(type_info, "PlayFab.ClientModels", "Currency");
        }
        inline app::Currency__Enum* create() {
            return il2cpp::create_object<app::Currency__Enum>(get_class());
        }
    } // namespace Currency__Enum
} // namespace app::classes::types
