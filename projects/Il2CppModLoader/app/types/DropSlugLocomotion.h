#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DropSlugLocomotion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DropSlugLocomotion__Class** type_info;
        inline app::DropSlugLocomotion__Class* get_class() {
            return il2cpp::get_class<app::DropSlugLocomotion__Class>(type_info, "", "DropSlugLocomotion");
        }
        inline app::DropSlugLocomotion* create() {
            return il2cpp::create_object<app::DropSlugLocomotion>(get_class());
        }
    } // namespace DropSlugLocomotion
} // namespace app::classes::types
