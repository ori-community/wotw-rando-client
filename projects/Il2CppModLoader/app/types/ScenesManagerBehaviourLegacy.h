#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourLegacy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenesManagerBehaviourLegacy__Class** type_info;
        inline app::ScenesManagerBehaviourLegacy__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourLegacy__Class>(type_info, "", "ScenesManagerBehaviourLegacy");
        }
        inline app::ScenesManagerBehaviourLegacy* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourLegacy>(get_class());
        }
    } // namespace ScenesManagerBehaviourLegacy
} // namespace app::classes::types
