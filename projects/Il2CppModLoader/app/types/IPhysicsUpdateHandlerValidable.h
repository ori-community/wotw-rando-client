#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPhysicsUpdateHandlerValidable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPhysicsUpdateHandlerValidable__Class** type_info;
        inline app::IPhysicsUpdateHandlerValidable__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsUpdateHandlerValidable__Class>(type_info, "Moon", "IPhysicsUpdateHandlerValidable");
        }
        inline app::IPhysicsUpdateHandlerValidable* create() {
            return il2cpp::create_object<app::IPhysicsUpdateHandlerValidable>(get_class());
        }
    } // namespace IPhysicsUpdateHandlerValidable
} // namespace app::classes::types
