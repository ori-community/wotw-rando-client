#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourUtility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenesManagerBehaviourUtility__Class** type_info;
        inline app::ScenesManagerBehaviourUtility__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourUtility__Class>(type_info, "", "ScenesManagerBehaviourUtility");
        }
        inline app::ScenesManagerBehaviourUtility* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourUtility>(get_class());
        }
    } // namespace ScenesManagerBehaviourUtility
} // namespace app::classes::types
