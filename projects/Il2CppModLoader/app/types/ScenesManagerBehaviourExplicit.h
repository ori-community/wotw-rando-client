#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourExplicit {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenesManagerBehaviourExplicit__Class** type_info;
        inline app::ScenesManagerBehaviourExplicit__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourExplicit__Class>(type_info, "", "ScenesManagerBehaviourExplicit");
        }
        inline app::ScenesManagerBehaviourExplicit* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourExplicit>(get_class());
        }
    } // namespace ScenesManagerBehaviourExplicit
} // namespace app::classes::types
