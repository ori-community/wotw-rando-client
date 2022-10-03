#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstructionLevelActivator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConstructionLevelActivator__Class** type_info;
        inline app::ConstructionLevelActivator__Class* get_class() {
            return il2cpp::get_class<app::ConstructionLevelActivator__Class>(type_info, "System.Runtime.Remoting.Activation", "ConstructionLevelActivator");
        }
        inline app::ConstructionLevelActivator* create() {
            return il2cpp::create_object<app::ConstructionLevelActivator>(get_class());
        }
    } // namespace ConstructionLevelActivator
} // namespace app::classes::types
