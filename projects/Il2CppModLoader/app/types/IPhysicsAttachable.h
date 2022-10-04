#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPhysicsAttachable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPhysicsAttachable__Class** type_info;
        inline app::IPhysicsAttachable__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsAttachable__Class>(type_info, "Moon", "IPhysicsAttachable");
        }
        inline app::IPhysicsAttachable* create() {
            return il2cpp::create_object<app::IPhysicsAttachable>(get_class());
        }
    } // namespace IPhysicsAttachable
} // namespace app::classes::types
