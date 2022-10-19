#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PhysicsEdge_colliderType__Enum {
        namespace {
            inline app::PhysicsEdge_colliderType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PhysicsEdge_colliderType__Enum__Class** type_info = &type_info_ref;
        inline app::PhysicsEdge_colliderType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsEdge_colliderType__Enum__Class>(type_info, "", "PhysicsEdge", "colliderType");
        }
        inline app::PhysicsEdge_colliderType__Enum* create() {
            return il2cpp::create_object<app::PhysicsEdge_colliderType__Enum>(get_class());
        }
    } // namespace PhysicsEdge_colliderType__Enum
} // namespace app::classes::types
