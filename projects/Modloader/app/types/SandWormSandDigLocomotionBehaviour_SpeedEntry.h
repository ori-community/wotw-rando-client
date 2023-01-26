#pragma once
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour_SpeedEntry.h>
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour_SpeedEntry__Boxed.h>
#include <Modloader/app/structs/SandWormSandDigLocomotionBehaviour_SpeedEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormSandDigLocomotionBehaviour_SpeedEntry {
        inline app::SandWormSandDigLocomotionBehaviour_SpeedEntry__Class** type_info() {
            static app::SandWormSandDigLocomotionBehaviour_SpeedEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormSandDigLocomotionBehaviour_SpeedEntry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormSandDigLocomotionBehaviour_SpeedEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormSandDigLocomotionBehaviour_SpeedEntry__Class>(type_info(), "", "SandWormSandDigLocomotionBehaviour", "SpeedEntry");
        }
        inline app::SandWormSandDigLocomotionBehaviour_SpeedEntry* create() {
            return il2cpp::create_object<app::SandWormSandDigLocomotionBehaviour_SpeedEntry>(get_class());
        }
        inline app::SandWormSandDigLocomotionBehaviour_SpeedEntry__Boxed* box(app::SandWormSandDigLocomotionBehaviour_SpeedEntry value) {
            return il2cpp::box_value<app::SandWormSandDigLocomotionBehaviour_SpeedEntry__Boxed>(get_class(), value);
        }
    } // namespace SandWormSandDigLocomotionBehaviour_SpeedEntry
} // namespace app::classes::types
