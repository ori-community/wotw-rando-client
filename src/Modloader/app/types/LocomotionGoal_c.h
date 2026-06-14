#pragma once
#include <Modloader/app/structs/LocomotionGoal_c.h>
#include <Modloader/app/structs/LocomotionGoal_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionGoal_c {
        inline app::LocomotionGoal_c__Class** type_info() {
            static app::LocomotionGoal_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocomotionGoal_c__Class**)(modloader::win::memory::resolve_rva(0x0475D3E0));
            }
            return cache;
        }
        inline app::LocomotionGoal_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LocomotionGoal_c__Class>(type_info(), "Moon", "LocomotionGoal", "<>c");
        }
        inline app::LocomotionGoal_c* create() {
            return il2cpp::create_object<app::LocomotionGoal_c>(get_class());
        }
    } // namespace LocomotionGoal_c
} // namespace app::classes::types
