#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoEvent__Class** type_info;
        inline app::MonoEvent__Class* get_class() {
            return il2cpp::get_class<app::MonoEvent__Class>(type_info, "System.Reflection", "MonoEvent");
        }
        inline app::MonoEvent* create() {
            return il2cpp::create_object<app::MonoEvent>(get_class());
        }
    } // namespace MonoEvent
} // namespace app::classes::types
