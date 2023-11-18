#pragma once
#include <Modloader/app/structs/LocomotionAnimation.h>
#include <Modloader/app/structs/LocomotionAnimation__Array.h>
#include <Modloader/app/structs/LocomotionAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionAnimation {
        inline app::LocomotionAnimation__Class** type_info() {
            static app::LocomotionAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionAnimation__Class* get_class() {
            return il2cpp::get_class<app::LocomotionAnimation__Class>(type_info(), "Moon", "LocomotionAnimation");
        }
        inline app::LocomotionAnimation* create() {
            return il2cpp::create_object<app::LocomotionAnimation>(get_class());
        }
        inline app::LocomotionAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::LocomotionAnimation__Array>(get_class(), size);
        }
        inline app::LocomotionAnimation__Array* create_array(const std::vector<app::LocomotionAnimation*>& items) {
            return il2cpp::array_new<app::LocomotionAnimation__Array>(get_class(), items);
        }
    } // namespace LocomotionAnimation
} // namespace app::classes::types
