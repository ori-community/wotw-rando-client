#pragma once
#include <Modloader/app/structs/SandWormLocomotion.h>
#include <Modloader/app/structs/SandWormLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormLocomotion {
        inline app::SandWormLocomotion__Class** type_info() {
            static app::SandWormLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SandWormLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04747848));
            }
            return cache;
        }
        inline app::SandWormLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SandWormLocomotion__Class>(type_info(), "", "SandWormLocomotion");
        }
        inline app::SandWormLocomotion* create() {
            return il2cpp::create_object<app::SandWormLocomotion>(get_class());
        }
    } // namespace SandWormLocomotion
} // namespace app::classes::types
