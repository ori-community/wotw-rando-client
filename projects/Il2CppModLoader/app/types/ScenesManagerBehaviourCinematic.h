#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerBehaviourCinematic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenesManagerBehaviourCinematic__Class** type_info;
        inline app::ScenesManagerBehaviourCinematic__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerBehaviourCinematic__Class>(type_info, "", "ScenesManagerBehaviourCinematic");
        }
        inline app::ScenesManagerBehaviourCinematic* create() {
            return il2cpp::create_object<app::ScenesManagerBehaviourCinematic>(get_class());
        }
    } // namespace ScenesManagerBehaviourCinematic
} // namespace app::classes::types
