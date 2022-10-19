#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ContextLevelActivator {
        inline app::ContextLevelActivator__Class** type_info = (app::ContextLevelActivator__Class**)(modloader::win::memory::resolve_rva(0x0478BF58));
        inline app::ContextLevelActivator__Class* get_class() {
            return il2cpp::get_class<app::ContextLevelActivator__Class>(type_info, "System.Runtime.Remoting.Activation", "ContextLevelActivator");
        }
        inline app::ContextLevelActivator* create() {
            return il2cpp::create_object<app::ContextLevelActivator>(get_class());
        }
    } // namespace ContextLevelActivator
} // namespace app::classes::types
