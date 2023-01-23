#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FixedUpdate_DirectorFixedUpdatePostPhysics__Class.h>
#include <Modloader/app/structs/FixedUpdate_DirectorFixedUpdatePostPhysics.h>
#include <Modloader/app/structs/FixedUpdate_DirectorFixedUpdatePostPhysics__Boxed.h>

namespace app::classes::types {
    namespace FixedUpdate_DirectorFixedUpdatePostPhysics {
        namespace {
            inline app::FixedUpdate_DirectorFixedUpdatePostPhysics__Class* type_info_ref = nullptr;
        }
        inline app::FixedUpdate_DirectorFixedUpdatePostPhysics__Class** type_info = &type_info_ref;
        inline app::FixedUpdate_DirectorFixedUpdatePostPhysics__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedUpdate_DirectorFixedUpdatePostPhysics__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "FixedUpdate", "DirectorFixedUpdatePostPhysics");
        }
        inline app::FixedUpdate_DirectorFixedUpdatePostPhysics* create() {
            return il2cpp::create_object<app::FixedUpdate_DirectorFixedUpdatePostPhysics>(get_class());
        }
        inline app::FixedUpdate_DirectorFixedUpdatePostPhysics__Boxed* box(app::FixedUpdate_DirectorFixedUpdatePostPhysics value) {
            return il2cpp::box_value<app::FixedUpdate_DirectorFixedUpdatePostPhysics__Boxed>(get_class(), value);
        }
    } // namespace FixedUpdate_DirectorFixedUpdatePostPhysics
} // namespace app::classes::types
