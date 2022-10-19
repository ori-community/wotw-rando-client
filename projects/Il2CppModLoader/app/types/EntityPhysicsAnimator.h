#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityPhysicsAnimator {
        namespace {
            inline app::EntityPhysicsAnimator__Class* type_info_ref = nullptr;
        }
        inline app::EntityPhysicsAnimator__Class** type_info = &type_info_ref;
        inline app::EntityPhysicsAnimator__Class* get_class() {
            return il2cpp::get_class<app::EntityPhysicsAnimator__Class>(type_info, "Moon.Timeline", "EntityPhysicsAnimator");
        }
        inline app::EntityPhysicsAnimator* create() {
            return il2cpp::create_object<app::EntityPhysicsAnimator>(get_class());
        }
    } // namespace EntityPhysicsAnimator
} // namespace app::classes::types
