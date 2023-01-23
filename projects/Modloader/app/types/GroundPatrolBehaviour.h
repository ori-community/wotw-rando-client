#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroundPatrolBehaviour__Class.h>
#include <Modloader/app/structs/GroundPatrolBehaviour.h>

namespace app::classes::types {
    namespace GroundPatrolBehaviour {
        namespace {
            inline app::GroundPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::GroundPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::GroundPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolBehaviour__Class>(type_info, "Moon", "GroundPatrolBehaviour");
        }
        inline app::GroundPatrolBehaviour* create() {
            return il2cpp::create_object<app::GroundPatrolBehaviour>(get_class());
        }
    } // namespace GroundPatrolBehaviour
} // namespace app::classes::types
