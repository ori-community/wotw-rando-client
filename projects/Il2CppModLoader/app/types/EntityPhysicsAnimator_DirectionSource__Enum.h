#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPhysicsAnimator_DirectionSource__Enum {
        namespace {
            app::EntityPhysicsAnimator_DirectionSource__Enum__Class* type_info_ref = nullptr;
        }
        app::EntityPhysicsAnimator_DirectionSource__Enum__Class** type_info = &type_info_ref;
        inline app::EntityPhysicsAnimator_DirectionSource__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPhysicsAnimator_DirectionSource__Enum__Class>(type_info, "Moon.Timeline", "EntityPhysicsAnimator", "DirectionSource");
        }
        inline app::EntityPhysicsAnimator_DirectionSource__Enum* create() {
            return il2cpp::create_object<app::EntityPhysicsAnimator_DirectionSource__Enum>(get_class());
        }
    } // namespace EntityPhysicsAnimator_DirectionSource__Enum
} // namespace app::classes::types
