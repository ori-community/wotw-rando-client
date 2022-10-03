#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SynchronizationContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SynchronizationContext__Class** type_info;
        inline app::SynchronizationContext__Class* get_class() {
            return il2cpp::get_class<app::SynchronizationContext__Class>(type_info, "System.Threading", "SynchronizationContext");
        }
        inline app::SynchronizationContext* create() {
            return il2cpp::create_object<app::SynchronizationContext>(get_class());
        }
    } // namespace SynchronizationContext
} // namespace app::classes::types
