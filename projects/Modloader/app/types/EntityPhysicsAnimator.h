#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityPhysicsAnimator__Class.h>
#include <Modloader/app/structs/EntityPhysicsAnimator.h>

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
