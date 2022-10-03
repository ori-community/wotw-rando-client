#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPlatformingMovement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityPlatformingMovement__Class** type_info;
        inline app::EntityPlatformingMovement__Class* get_class() {
            return il2cpp::get_class<app::EntityPlatformingMovement__Class>(type_info, "", "EntityPlatformingMovement");
        }
        inline app::EntityPlatformingMovement* create() {
            return il2cpp::create_object<app::EntityPlatformingMovement>(get_class());
        }
    } // namespace EntityPlatformingMovement
} // namespace app::classes::types
