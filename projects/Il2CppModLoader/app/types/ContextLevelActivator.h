#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContextLevelActivator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ContextLevelActivator__Class** type_info;
        inline app::ContextLevelActivator__Class* get_class() {
            return il2cpp::get_class<app::ContextLevelActivator__Class>(type_info, "System.Runtime.Remoting.Activation", "ContextLevelActivator");
        }
        inline app::ContextLevelActivator* create() {
            return il2cpp::create_object<app::ContextLevelActivator>(get_class());
        }
    } // namespace ContextLevelActivator
} // namespace app::classes::types
