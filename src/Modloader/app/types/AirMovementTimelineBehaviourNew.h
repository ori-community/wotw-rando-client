#pragma once
#include <Modloader/app/structs/AirMovementTimelineBehaviourNew.h>
#include <Modloader/app/structs/AirMovementTimelineBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AirMovementTimelineBehaviourNew {
        inline app::AirMovementTimelineBehaviourNew__Class** type_info() {
            static app::AirMovementTimelineBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AirMovementTimelineBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AirMovementTimelineBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::AirMovementTimelineBehaviourNew__Class>(type_info(), "", "AirMovementTimelineBehaviourNew");
        }
        inline app::AirMovementTimelineBehaviourNew* create() {
            return il2cpp::create_object<app::AirMovementTimelineBehaviourNew>(get_class());
        }
    } // namespace AirMovementTimelineBehaviourNew
} // namespace app::classes::types
