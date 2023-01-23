#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandWormLocomotion__Class.h>
#include <Modloader/app/structs/SandWormLocomotion.h>

namespace app::classes::types {
    namespace SandWormLocomotion {
        inline app::SandWormLocomotion__Class** type_info = (app::SandWormLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04747848));
        inline app::SandWormLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SandWormLocomotion__Class>(type_info, "", "SandWormLocomotion");
        }
        inline app::SandWormLocomotion* create() {
            return il2cpp::create_object<app::SandWormLocomotion>(get_class());
        }
    } // namespace SandWormLocomotion
} // namespace app::classes::types
