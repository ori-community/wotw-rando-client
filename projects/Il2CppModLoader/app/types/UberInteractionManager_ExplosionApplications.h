#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_ExplosionApplications {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberInteractionManager_ExplosionApplications__Class** type_info;
        inline app::UberInteractionManager_ExplosionApplications__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_ExplosionApplications__Class>(type_info, "", "UberInteractionManager", "ExplosionApplications");
        }
        inline app::UberInteractionManager_ExplosionApplications* create() {
            return il2cpp::create_object<app::UberInteractionManager_ExplosionApplications>(get_class());
        }
    } // namespace UberInteractionManager_ExplosionApplications
} // namespace app::classes::types
