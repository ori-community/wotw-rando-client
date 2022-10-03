#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropSlugFallState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DropSlugFallState__Class** type_info;
        inline app::DropSlugFallState__Class* get_class() {
            return il2cpp::get_class<app::DropSlugFallState__Class>(type_info, "", "DropSlugFallState");
        }
        inline app::DropSlugFallState* create() {
            return il2cpp::create_object<app::DropSlugFallState>(get_class());
        }
    } // namespace DropSlugFallState
} // namespace app::classes::types
