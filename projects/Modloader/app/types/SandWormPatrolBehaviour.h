#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormPatrolBehaviour {
        namespace {
            inline app::SandWormPatrolBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SandWormPatrolBehaviour__Class** type_info = &type_info_ref;
        inline app::SandWormPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormPatrolBehaviour__Class>(type_info, "", "SandWormPatrolBehaviour");
        }
        inline app::SandWormPatrolBehaviour* create() {
            return il2cpp::create_object<app::SandWormPatrolBehaviour>(get_class());
        }
    } // namespace SandWormPatrolBehaviour
} // namespace app::classes::types
