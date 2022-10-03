#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_ExplosionApplicationComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberInteractionManager_ExplosionApplicationComparer__Class** type_info;
        inline app::UberInteractionManager_ExplosionApplicationComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_ExplosionApplicationComparer__Class>(type_info, "", "UberInteractionManager", "ExplosionApplicationComparer");
        }
        inline app::UberInteractionManager_ExplosionApplicationComparer* create() {
            return il2cpp::create_object<app::UberInteractionManager_ExplosionApplicationComparer>(get_class());
        }
    } // namespace UberInteractionManager_ExplosionApplicationComparer
} // namespace app::classes::types
