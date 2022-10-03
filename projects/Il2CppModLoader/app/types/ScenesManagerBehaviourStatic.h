#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourStatic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenesManagerBehaviourStatic__Class** type_info;
        inline app::ScenesManagerBehaviourStatic__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourStatic__Class>(type_info, "", "ScenesManagerBehaviourStatic");
        }
        inline app::ScenesManagerBehaviourStatic* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourStatic>(get_class());
        }
    } // namespace ScenesManagerBehaviourStatic
} // namespace app::classes::types
