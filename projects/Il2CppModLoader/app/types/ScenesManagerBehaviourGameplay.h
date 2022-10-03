#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourGameplay {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenesManagerBehaviourGameplay__Class** type_info;
        inline app::ScenesManagerBehaviourGameplay__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourGameplay__Class>(type_info, "", "ScenesManagerBehaviourGameplay");
        }
        inline app::ScenesManagerBehaviourGameplay* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourGameplay>(get_class());
        }
    } // namespace ScenesManagerBehaviourGameplay
} // namespace app::classes::types
