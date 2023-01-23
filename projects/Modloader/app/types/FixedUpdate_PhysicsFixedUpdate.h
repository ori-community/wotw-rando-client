#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FixedUpdate_PhysicsFixedUpdate__Class.h>
#include <Modloader/app/structs/FixedUpdate_PhysicsFixedUpdate.h>
#include <Modloader/app/structs/FixedUpdate_PhysicsFixedUpdate__Boxed.h>

namespace app::classes::types {
    namespace FixedUpdate_PhysicsFixedUpdate {
        namespace {
            inline app::FixedUpdate_PhysicsFixedUpdate__Class* type_info_ref = nullptr;
        }
        inline app::FixedUpdate_PhysicsFixedUpdate__Class** type_info = &type_info_ref;
        inline app::FixedUpdate_PhysicsFixedUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_PhysicsFixedUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "PhysicsFixedUpdate");
        }
        inline app::FixedUpdate_PhysicsFixedUpdate* create() {
            return il2cpp::create_object<app::FixedUpdate_PhysicsFixedUpdate>(get_class());
        }
        inline app::FixedUpdate_PhysicsFixedUpdate__Boxed* box(app::FixedUpdate_PhysicsFixedUpdate value) {
            return il2cpp::box_value<app::FixedUpdate_PhysicsFixedUpdate__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_PhysicsFixedUpdate
} // namespace app::classes::types
