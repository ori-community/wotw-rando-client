#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropSlugThrownState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DropSlugThrownState__Class** type_info;
        inline app::DropSlugThrownState__Class* get_class() {
            return il2cpp::get_class<app::DropSlugThrownState__Class>(type_info, "", "DropSlugThrownState");
        }
        inline app::DropSlugThrownState* create() {
            return il2cpp::create_object<app::DropSlugThrownState>(get_class());
        }
    } // namespace DropSlugThrownState
} // namespace app::classes::types
