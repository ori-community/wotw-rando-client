#pragma once
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour.h>
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormSandDigLocomotionBehaviour {
        inline app::SandWormSandDigLocomotionBehaviour__Class** type_info() {
            static app::SandWormSandDigLocomotionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SandWormSandDigLocomotionBehaviour__Class**)(modloader::win::memory::resolve_rva(0x04754860));
            }
            return cache;
        }
        inline app::SandWormSandDigLocomotionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormSandDigLocomotionBehaviour__Class>(type_info(), "", "SandWormSandDigLocomotionBehaviour");
        }
        inline app::SandWormSandDigLocomotionBehaviour* create() {
            return il2cpp::create_object<app::SandWormSandDigLocomotionBehaviour>(get_class());
        }
    } // namespace SandWormSandDigLocomotionBehaviour
} // namespace app::classes::types
