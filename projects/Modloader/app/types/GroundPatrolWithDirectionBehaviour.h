#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroundPatrolWithDirectionBehaviour {
        namespace {
            inline app::GroundPatrolWithDirectionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::GroundPatrolWithDirectionBehaviour__Class** type_info = &type_info_ref;
        inline app::GroundPatrolWithDirectionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GroundPatrolWithDirectionBehaviour__Class>(type_info, "Moon", "GroundPatrolWithDirectionBehaviour");
        }
        inline app::GroundPatrolWithDirectionBehaviour* create() {
            return il2cpp::create_object<app::GroundPatrolWithDirectionBehaviour>(get_class());
        }
    } // namespace GroundPatrolWithDirectionBehaviour
} // namespace app::classes::types
