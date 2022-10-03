#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropSlugIdleState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DropSlugIdleState__Class** type_info;
        inline app::DropSlugIdleState__Class* get_class() {
            return il2cpp::get_class<app::DropSlugIdleState__Class>(type_info, "", "DropSlugIdleState");
        }
        inline app::DropSlugIdleState* create() {
            return il2cpp::create_object<app::DropSlugIdleState>(get_class());
        }
    } // namespace DropSlugIdleState
} // namespace app::classes::types
