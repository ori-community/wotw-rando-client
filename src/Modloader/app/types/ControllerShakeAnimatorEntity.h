#pragma once
#include <Modloader/app/structs/ControllerShakeAnimatorEntity.h>
#include <Modloader/app/structs/ControllerShakeAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControllerShakeAnimatorEntity {
        inline app::ControllerShakeAnimatorEntity__Class** type_info() {
            static app::ControllerShakeAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControllerShakeAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControllerShakeAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::ControllerShakeAnimatorEntity__Class>(type_info(), "Moon.Timeline", "ControllerShakeAnimatorEntity");
        }
        inline app::ControllerShakeAnimatorEntity* create() {
            return il2cpp::create_object<app::ControllerShakeAnimatorEntity>(get_class());
        }
    } // namespace ControllerShakeAnimatorEntity
} // namespace app::classes::types
