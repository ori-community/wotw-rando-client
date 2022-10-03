#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropSlugAlertState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DropSlugAlertState__Class** type_info;
        inline app::DropSlugAlertState__Class* get_class() {
            return il2cpp::get_class<app::DropSlugAlertState__Class>(type_info, "", "DropSlugAlertState");
        }
        inline app::DropSlugAlertState* create() {
            return il2cpp::create_object<app::DropSlugAlertState>(get_class());
        }
    } // namespace DropSlugAlertState
} // namespace app::classes::types
